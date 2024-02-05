class No {
  constructor(valor, capacidade) {
    this.valor = valor;
    this.proximo = null;
  }
}

class FilaCircular {

  constructor(capacidade) {
    this.inicio = null;
    this.final = null;
    this.capacidade = capacidade;
    this.contador = 0;
  }

  isEmpty() {
    return this.inicio == null;
  }

  isFull() {
    return this.contador === this.capacidade;
  }

  adicionarInicio(valor) {
    if (this.isFull()) {
      console.log('Capacidade atingida');
      return;
    }

    let no = new No(valor);
    this.contador++;

    if (this.isEmpty()) {
      this.inicio = no;
      this.final = no;
      return;
    }

    this.final.proximo = no;
    this.final = no;
  }


  removerInicio() {
    this.contador--;
    let no = this.inicio;

    if (!this.isEmpty()) {
      this.inicio = this.inicio.proximo;
      return;
    }

    if (this.inicio == null) {
      this.final = null;
    }

    return no;
  }


  print() {

    if (this.isEmpty()) {
      console.log('Fila vazia');
      return;
    }

    let aux = this.inicio;
    let str = '[';
    while (aux) {
      console.log(aux.valor, 'aa');
      str = str + ` ${aux.valor}, `
      aux = aux.proximo;
    }
    str = str + ']'

    console.log(str);
  }

}


let fila = new FilaCircular(3);

fila.adicionarInicio(1);
fila.print();

fila.adicionarInicio(2);
fila.print();

fila.adicionarInicio(3);
fila.print();

fila.adicionarInicio(4);
fila.print();

fila.print();
fila.removerInicio();
fila.print();


