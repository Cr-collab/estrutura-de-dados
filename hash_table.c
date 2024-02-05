#include <stdio.h>
#include <stdlib.h>

/* AULA 260 : tabela hash linear com vetot */
// 2 * 15 = 30

#define TAM 31

void inicializarTabela(int t[]){
  int i;

  for(i = 0; i < TAM; i++){
    t[i] = 0;
  }
}

int funcaoHash(int valor){
 return valor % TAM;
}

void inserir(int t[],int valor){
 int id = funcaoHash(valor);
 while(t[id] != 0){
   id =  funcaoHash(id + 1);
 }
 t[id] = valor;
}


int busca(int t[],int valor){
    int id = funcaoHash(valor);
    while(t[id] != 0){
       if(t[id] == valor){
          return t[id];
       }else {
         id = funcaoHash(id + 1);
       }
     }
     return 0;
}

void imprimir(int t[]){
   int i;
   for(i = 0; i < TAM; i++){
     printf("%d =  %d\n", i, t[i]);
   }
}

int main()
{
    int opcao ,valor,tabela[TAM];
    inicializarTabela(tabela);
    do {
     printf("\n\t0 - Sair \n\t1 - Inserir\n\t2 - Buscar\n\t3 - Imprimir\n");
     scanf("%d", &opcao);
    switch(opcao){
     case 1 :
        printf("\tQual valor deseja inserir ?");
        scanf("%d", &valor);
        inserir(tabela, valor);
      break;
     case 2 :
        printf("\tQual valor deseja buscar ?");
        scanf("%d", &valor);
        printf("%d", busca(tabela, valor));
      break;
     case 3 :
       imprimir(tabela);
       break;
      default:
        printf("Opcao invalida!\n");

    }
    }while(opcao != 0);
    return 0;
}
