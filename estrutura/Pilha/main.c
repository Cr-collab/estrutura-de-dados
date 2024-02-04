#include <stdio.h>
#include <stdlib.h>


    typedef struct {
      int dia, mes, ano;
    }Data;

    typedef struct {
        char nome[50];
        Data data;
    }Pessoa;

    typedef struct no {
        Pessoa p;
        struct no *proximo;
    }No;

    Pessoa ler_pressoa(){
        Pessoa p;

        printf("\nDigite nome e data de nascimento dd mm aaaa:\n");
        scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
        return p;
    }

    void imprimir_pessoa(Pessoa p){
        printf("\nNome : %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
    }

    // função para a operação push (empilhar)

    No* empilhar(No *topo){
       No *novoTopo =  malloc(sizeof(No));

       if(novoTopo){
        novoTopo->p = ler_pressoa();
        novoTopo->proximo =  topo;
        return novoTopo;
       }else {
        printf("\nErro ao alocar memoria... \n");
       }

       return NULL;
    }


    No* desempilhar(No **topo){
       if(*topo != NULL){
         No *remover = *topo;
         *topo = remover->proximo;
         return remover;
       }else {
         printf("\nPilha Vazia!\n");
       }

       return NULL;

    }



    void imprimir_pilha(No *topo){
        printf("\n------pilha ------\n");
          while(topo){
            imprimir_pessoa(topo->p);
            topo =  topo->proximo;
          }
        printf("\n------ fim pilha ------\n");
    }


    int main()
    {
        No *remover,*topo = NULL;
        int opcao;

        do {
         printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
         scanf("%d", &opcao);
         getchar();

         switch(opcao){
          case 1:
             topo =  empilhar(topo);
            break;
          case 2:
             remover = desempilhar(&topo);
             if(remover){
              printf("\nElemento removido com sucesso\n");
              imprimir_pessoa(remover->p);
             }else {
              printf("\nSem no a remover\n");
             }
            break;
          case 3:
            imprimir_pilha(topo);
            break;
          default:
             if(opcao != 0){
               printf("\nOpcao invalida!!!\n");
             }
         }
        }while(opcao != 0);
    }
