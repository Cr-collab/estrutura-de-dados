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


    typedef struct {
      No *topo;
      int tam;
    }Pilha;


    void criar_pilha(Pilha *p){
        p->topo = NULL;
        p->tam = 0;
    }

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

    void empilhar(Pilha *p){
       No *novoTopo =  malloc(sizeof(No));

       if(novoTopo){
        novoTopo->p = ler_pressoa();
        novoTopo->proximo =  p->topo;
        p->topo =  novoTopo;
        p->tam++;
       }else {
        printf("\nErro ao alocar memoria... \n");
       }
    }


    No* desempilhar(Pilha *p){
       if(p->topo != NULL){
         No *remover = p->topo;
         p->topo = remover->proximo;
         p->tam--;
         return remover;
       }else {
         printf("\nPilha Vazia!\n");
       }

       return NULL;

    }



    void imprimir_pilha(Pilha *p){
        No *aux =  p->topo;
        printf("\n------pilha ------ Tam : %d\n", p->tam);
          while(aux){
            imprimir_pessoa(aux->p);
            aux =  aux->proximo;
          }
        printf("\n------ fim pilha ------\n");
    }


    int main()
    {
        No *remover;
        Pilha p;
        int opcao;

        criar_pilha(&p);

        do {
         printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
         scanf("%d", &opcao);
         getchar();

         switch(opcao){
          case 1:
               empilhar(&p);
            break;
          case 2:
             remover = desempilhar(&p);
             if(remover){
              printf("\nElemento removido com sucesso\n");
              imprimir_pessoa(remover->p);
              free(remover);
             }else {
              printf("\nSem no a remover\n");
             }
            break;
          case 3:
            imprimir_pilha(&p);
            break;
          default:
             if(opcao != 0){
               printf("\nOpcao invalida!!!\n");
             }
         }
        }while(opcao != 0);
    }
