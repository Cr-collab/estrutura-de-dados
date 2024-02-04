#include <stdio.h>
#include <stdlib.h>

int tamanho = 10;
 int vetor[] = {5,7,9,1,3,10,2,4,8,6};

void imprimir(int vetor[10]){
  int i;

  printf("-------------------\n");
  for(i = 0; i < tamanho; i++){
    printf("%d\n", vetor[i]);
  }
   printf("-------------------\n");
}

merge_sort(int vetor[10], int ini, int fim ){

     int meio, i , j, k , aux[tamanho];
     if(ini < fim){
        meio =  (ini + fim) / 2;
        merge_sort(vetor, ini, meio);
        merge_sort(vetor, meio + 1, fim);

        // faz o merge ordenando os elementos
        i =  ini;
        j = meio + 1;
        k = ini;

        while(i <= meio && j <= fim){
          printf("%d\n\n",i <= meio);
          if(vetor[i] < vetor[j]){
            aux[k] =  vetor[i];
          }else {
            aux[k]  = vetor[j];
          }

            i++;
            k++;
        }




        while( i <=  meio){
            aux[k] =  vetor[i];
            i++;
            k++;
        }


        imprimir(aux);

        while( j <=  fim){
            aux[k] =  vetor[j];
            i++;
            k++;
        }



        for(i = ini; i <=  fim; i++){
          vetor[i] = aux[i];
        }
     }
}

int main(){

    imprimir(vetor);
    merge_sort(vetor, 0, 9);
    imprimir(vetor);

}
