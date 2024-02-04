#include <stdio.h>
#include <stdlib.h>

// na primiera vez o inico vai ser zero
// fim na primeira vez vai esta no fim do vetor
int particiona(int *v, int inicio,int fim){
    int pivo = (v[inicio] + v[fim] + v[(inicio + fim) / 2]) / 3;
    while(inicio < fim){
      while(inicio < fim && v[inicio] <= pivo){
        inicio = inicio + 1;
      }

      while(inicio < fim && v[fim] > pivo){
        fim = fim -1;
      }

      int aux =  v[inicio];
      v[inicio] =  v[fim];
      v[fim] =  aux;
    }

    return inicio;
}

void quickSort(int *v, int inicio,int fim){
    if(inicio < fim){
      int meio =  particiona(v, inicio, fim);
      quickSort(v, inicio, meio - 1);
      quickSort(v, meio, fim);
    }
}


int imprimir(int *v, int tam){
  int i;
  for(i = 0; i <= tam; i++){
   printf(" %d ,", v[i]);
  }
  printf("\n");
}

int main()
{
    int vet[] = {47,35,12,49,56,25,71,83,5,3,1,70,99,10,61};// tamanho 15
    imprimir(vet, 14);
    quickSort(vet, 0, 14);
    imprimir(vet, 14);

    return 0;
}
