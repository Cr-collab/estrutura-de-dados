class Item {
  constructor(valor) {
    this.valor = valor;
    this.proximoValor = null;
  }
}


class ListaLincada {
  constructor() {
    this.inicio = null;
    this.final = null;
    this.tamanho = 0;
  }

  estaListaEstaVazia() {
    return this.pegueTamanhoLista() === 0;
  }

  pegueTamanhoLista() {
    return this.tamanho;
  }

  adicionar(valor, posicao) {
    const posicaoMenorQueZero = posicao < 0;
    const posicaoMaiorQueTamanho = posicao > this.pegueTamanhoLista();
    const posicaoEAPrimeira = posicao === 0;
    const posicaoEAUltima = posicao === this.pegueTamanhoLista();

    if (posicaoMenorQueZero || posicaoMaiorQueTamanho) {
      console.log('Posição invalida');
      return;
    }

    if (posicaoEAPrimeira) {
      this.adicionarItemNoInicio(valor);
      return;
    }

    if (posicaoEAUltima) {
      this.adicionarItemNoFinal(valor);
      return;
    }

    const novoItem = new Item(valor);
    let itemAtual = this.inicio;
    this.tamanho++;

    for (let index = 0; index < posicao - 1; index++) {
      itemAtual = itemAtual.proximoValor;
    }

    novoItem.proximoValor = itemAtual.proximoValor;
    itemAtual.proximoValor = novoItem;

  }


  adicionarItemNoInicio(valor) {
    const novoItem = new Item(valor);
    this.tamanho++;

    if (!this.estaListaEstaVazia()) {
      novoItem.proximoValor = this.inicio;
    }

    this.inicio = novoItem;
    this.final = novoItem;
  }

  adicionarItemNoFinal(valor) {
    const novoItem = new Item(valor);
    this.tamanho++;

    if (!this.estaListaEstaVazia()) {
      this.final.proximoValor = novoItem;
      this.final = novoItem;
    }

    this.final = novoItem;
    this.inicio = novoItem;
  }


  removerPara(posicao) {
    const posicaoEMenorQueZero = posicao < 0;
    const posicaoMaiorOuIgualAoTamanhoDaLista = posicao >= this.pegueTamanhoLista();
    const posicaoEAPrimeira = posicao === 0;
    const posicaoEAUltima = posicao === this.pegueTamanhoLista();

    if (posicaoEMenorQueZero || posicaoMaiorOuIgualAoTamanhoDaLista) {
      return null;
    }

    let itemRemovido;

    this.tamanho--;

    if (posicaoEAPrimeira) {
      this.removerNoInicio();
      return;
    }

    if (posicaoEAUltima) {
      this.removerNoFinal();
      return;
    }

    let itemAnterior = this.inicio;

    for (let index = 0; index < posicao - 1; index++) {
      itemAnterior = itemAnterior.proximoValor;
    }

    itemRemovido = itemAnterior.proximoValor;
    itemAnterior.proximoValor = itemRemovido.proximoValor;
    return itemRemovido.valor;
  }


  removerNoInicio() {
    if (this.estaListaEstaVazia()) {
      return null;
    }

    const valor = this.inicio.valor;
    this.inicio = this.inicio.proximoValor;
    this.tamanho--;
    return valor;
  }


  removerNoFinal() {
    if (this.estaListaEstaVazia()) {
      return null;
    }

    this.tamanho--;
    const valor = this.final.valor;

    if (this.pegueTamanhoLista() === 1) {
      this.inicio = null;
      this.final = null;
      return valor;
    }

    let anterior = this.inicio;

    while (anterior.proximoItem !== this.final) {
      anterior = anterior.proximoValor;
    }

    anterior.proximoValor = null;
    this.inicio = anterior;
    return valor;
  }


  removerValor(valor) {
    if (this.estaListaEstaVazia()) {
      return null;
    }

    if (this.inicio.valor === valor) {
      this.inicio = this.inicio.proximoValor;
      this.tamanho--;
      return valor;
    }

    let itemAnterior = this.inicio;



    while (itemAnterior.proximoValor && itemAnterior.proximoValor.valor !== valor) {
      itemAnterior = itemAnterior.proximoValor;
    }



    if (itemAnterior.proximoValor) {
      const itemRemovido = itemAnterior.proximoValor;
      itemAnterior.proximoValor = itemRemovido.proximoValor;
      this.tamanho--;
      return itemRemovido.valor;
    }

    return null;
  }

  pesquisar(valor) {
    if (this.estaListaEstaVazia()) {
      return -1;
    }

    let posicao = 0;
    let itemAtual = this.inicio;

    while (itemAtual) {
      if (itemAtual.valor === valor) {
        return posicao;
      }
      itemAtual = itemAtual.proximoValor
      posicao++;
    }

    return -1;
  }

  reverterLista() {
    let itemAnterior = null;
    let itemAtual = this.inicio;
    while (itemAtual) {
      let proximoItem = itemAtual.proximoValor;
      itemAtual.proximoValor = itemAnterior;
      itemAnterior = itemAtual;
      itemAtual = proximoItem;
    }

    this.inicio = itemAnterior;
  }


  imprimirLista() {
    if (!this.estaListaEstaVazia()) {
      let logLista = '[';
      let currentItem = this.inicio;
      while (currentItem) {
        logLista = logLista + ` ${currentItem.valor},`
        currentItem = currentItem.proximoValor;
      }
      logLista = logLista + ']';
      console.log(logLista);
      return;
    }

    console.log('A Lista esta vazia');
  }
};


const lista = new ListaLincada();
console.log('Lista esta vazia ?', lista.estaListaEstaVazia());
console.log('Tamanho da Lista', lista.pegueTamanhoLista());
lista.adicionarItemNoInicio(10);
lista.adicionarItemNoFinal(11);
lista.imprimirLista();
lista.adicionarItemNoInicio(20);
lista.adicionarItemNoFinal(22);
lista.imprimirLista();
lista.adicionarItemNoInicio(30);
lista.adicionarItemNoFinal(33);
lista.imprimirLista();
lista.adicionar(9, 3)
lista.imprimirLista();
console.log(lista.removerPara(6));
lista.imprimirLista();
console.log(lista.removerValor(22));
lista.imprimirLista();

console.log(lista.pesquisar(11))
lista.reverterLista();
lista.imprimirLista();
