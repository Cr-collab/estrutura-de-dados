const { keyIn } = require("readline-sync");

class TabelaDeRegistro {
  constructor(tamanho) {
    this.tabela = new Array(tamanho);
    this.tamanho = tamanho;
  }

  resumo(chave) {
    let total = 0;

    for (let index = 0; index < chave.length; index++) {
      total += chave.charCodeAt(index);
      // console.log(total);
    }

    // console.log(total % this.tamanho, 'aaaaaa')

    return total % this.tamanho;
  }


  setar(chave, valor) {
    const indexador = this.resumo(chave);
    // this.tabela[indexador] = valor;
    const balde = this.tabela[indexador]
    if (!balde) {
      this.tabela[indexador] = [[chave, valor]];
      return;
    }

    const mesmoItemChave = balde.find(item => item[0] === chave);
    if (mesmoItemChave) {
      mesmoItemChave[1] = valor;
      return;
    }

    balde.push([chave, valor]);
  }

  pegar(chave) {
    const indexador = this.resumo(chave);
    // return this.tabela[indexador];
    const balde = this.tabela[indexador]
    if (balde) {
      const mesmoItemChave = balde.find(item => item[0] == chave);
      if (mesmoItemChave) {
        return mesmoItemChave[1]
      }
    }


    return undefined;
  }

  remover(chave) {
    const indexador = this.resumo(chave);
    const balde = this.tabela[indexador]
    if (balde) {
      const mesmoItemChave = balde.find(item => item[0] == chave);
      if (mesmoItemChave) {
        balde.splice(balde.indexOf(mesmoItemChave), 1)
      }
    }


    return undefined;

  }

  mostrar() {
    for (let index = 0; index < this.tabela.length; index++) {
      if (this.tabela[index]) {
        console.log(this.tabela[index])

      }
    }
  }
}


const tabela = new TabelaDeRegistro(50);

tabela.setar('name', 'Bruce');
tabela.setar('age', 25);
tabela.mostrar();

console.log(tabela.pegar('name'));

tabela.setar('name', 'Clark');
tabela.setar('name', 'Diana');
tabela.mostrar()
