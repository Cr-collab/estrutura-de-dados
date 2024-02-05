class No {
  constructor(valor) {
    this.valor = valor;
    this.proximo = null;
  }
}

class Fila {

  constructor() {
    this.inicio = null;
    this.final = null;
  }

  isEmpty() {
    return this.inicio == null;
  }

  adicionarInicio(valor) {
    let no = new No(valor);

    if (this.isEmpty()) {
      this.inicio = no;
      this.final = no;
      return;
    }

    this.final.proximo = no;
    this.final = no;
  }


  removerInicio() {
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


let fila = new Fila();

fila.adicionarInicio(1);
fila.adicionarInicio(2);
fila.print();
fila.removerInicio();
fila.print();


