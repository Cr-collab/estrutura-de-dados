class Pilha {
  constructor() {
    this.items = [];
    this.contador = 0;
  }

  //  Adicionar elemento no topo da Pilha
  empilhar(elemento) {
    this.items[this.contador] = elemento;
    console.log(`${elemento} adicionado na ${this.contador}`);
    this.contador = this.contador + 1;
    return this.contador;
  }

  // Retornar e Remover do topo da pilha
  desempilhar() {
    if (this.contador == 0) {
      return undefined;
    }

    let removerItem = this.items[this.contador - 1];
    this.contador = this.contador - 1;
    console.log(`${removerItem} removido`)
    return removerItem;
  }

  // Verificar elemento do topo 

  pegueLastElement() {
    console.log(`Elemento do topo é  = ${this.items[this.contador - 1]}`)
    return this.items[this.contador - 1];
  }

  // Verificar se esta vazio a pilha
  isEmpty() {
    if (this.contador !== 0) {
      console.log('Pilha não esta vazia');
      return false;
    }
    console.log('Pilha esta cheia');
    return true;
  }

  tamanho() {
    console.log(`O tamanho da pilha é ${this.contador}`)
    return this.contador;
  }

  print() {
    let str = '';

    for (let index = 0; index < this.contador; index++) {
      str += this.items[index] + '';
    }

    return str;
  }

  limpar() {
    this.item = [];
    this.contador = 0;
    console.log('Pilha vazia')
    return this.item;
  }

}


const pilha = new Pilha();
console.log(pilha.isEmpty());
pilha.empilhar(10);
pilha.pegueLastElement();
pilha.empilhar(20);
pilha.empilhar(30);

pilha.desempilhar();
console.log(pilha.print());