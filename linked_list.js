class No {
  constructor(valor) {
    this.valor = valor;
    this.proximo = null;
  }
}

class Lista {
  constructor() {
    this.cabeca = null;
  }

  adicionar(valor) {
    const novoNo = new No(valor);
    if (this.cabeca === null) {
      this.cabeca = novoNo;
    } else {
      let atual = this.cabeca;

      while (atual.proximo != null) {
        atual = atual.proximo;
      }

      atual.proximo = novoNo;
    }
  }

  pegar(posicao) {
    if (posicao < 0) {
      return undefined;
    }

    let atual = this.cabeca;
    let i = 0;
    while (atual != null && i < posicao) {
      atual = atual.proximo;
      i++;
    }

    if (atual !== null) {
      return atual.valor;
    }

    return undefined;
  }

  remover(posicao) {
    if (this.cabeca == null || posicao < 0) {
      throw new RangeError(`Sem item na posição ${posicao}`);
    }

    if (posicao === 0) {
      this.cabeca = this.cabeca.proximo;
      return true;
    }

    let atual = this.cabeca;
    let anterior = null;
    let i = 0;

    while (atual !== null && i < posicao) {
      anterior = atual;
      atual = atual.proximo;
      i++;
    }

    if (atual !== null) {
      anterior.proximo = atual.proximo;
      return true;
    }
    throw new RangeError(`Sem item na posição ${posicao}`);
  }

  valores() {
    let atual = this.cabeca;
    let valores = [];

    while (atual !== null) {
      valores.push(atual.valor);
      atual = atual.proximo;
    }

    return valores;
  }
}


const lista = new Lista();
lista.adicionar(1);
lista.adicionar(2);
lista.adicionar(3);
lista.adicionar(4);
console.log(lista.valores());
lista.remover(2);
console.log(lista.valores());

console.log(lista.pegar(1));