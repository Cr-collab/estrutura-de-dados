/*
            Aula 231: Como descobrir se uma expressão matemática está mal formada?

            Código escrito por Wagner Gaspar
            Julho de 2021
*/

typedef struct no{
    float valor;
    struct no *proximo;
}No;

No* empilhar(No *pilha, float num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    }
    else
        printf("\tErro ao alocar memoria!\n");
    return NULL;
}

No* desempilhar(No **pilha){
    No *remover = NULL;

    if(*pilha){
        remover = *pilha;
        *pilha = remover->proximo;
    }
    else
        printf("\tPilha vazia\n");
    return remover;
}

void imprimir(No *pilha){
    printf("\n\tPILHA\n");
    while(pilha){
        printf("\t%c\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\tFIM PILHA\n\n");
}

float resolver_expressao(char x[]){

}

int main(){
    char exp[50];

    printf("\tDigite um expressao: ");
    scanf("%49[^\n]", exp);
    printf("\nExpressao: %s\nRetorno: %d\n", exp, identifica_formacao(exp));
}
