#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//114

int main() {

    int a, fim = 19, copia, vetor[20];

    // lê valores do teclado e salva no vetor
    for(a = 0; a < 20; a++){
        printf("digite %d: ", a);
        scanf("%d", &vetor[a]);
    }

    // imprime o vetor lido
    printf("\nVetor original: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    // faz a troca dos elementos do vetor
    for(a = 0; a < 10; a++){
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    // imprime o vetor novamente (agora modificado)
    printf("\nVetor modificado: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    return 0;
}


// 106

/*
int main(){
 int i, n;

 do {
    printf("Digite um numero para N: ");
    scanf("%d", &n);
 }while(n < 0);


 for(i = 0; i < n; i+=2){
    printf("%d\n", i * i);
 }
}
*/


/*int main(){
  float nota1, nota2, media;

  do {
    printf("Digite a primeira nota :");
  scanf("%f", &nota1);
  }while(nota1 < 0 || nota1 > 10);


  do {
    printf("Digite a primeira nota :");
    scanf("%f", &nota2);
  }while(nota2 < 0 || nota2 > 10);

   media =  (nota1 + nota2) / 2;
   printf("%.2f", media);
}*/



/*

int main(){
int i;
int sumOdd = 0;
  for(i = 0; i < 1000; i++){
     if( i % 2 > 0){
      sumOdd++;
     }
  }

  for(i = 0; i < 1000; i += 2){
   sumOdd++;
  }

  printf("%d", sumOdd);
}*/

/*int main(){
   int senha = 12345;
   int senhaDigitada;


   do {
     printf("Digite sua senha para ter acesso : ");
     scanf("%d", &senhaDigitada);

     if(senha == senhaDigitada){
      printf("Acesso permitido\n");
     }else {
      printf("Senha Invalida\n\n Digite sua Senha :  ");
     }
   } while(senha != senhaDigitada);

}
*/

/* int main(){
   int i, valor;

   do {
     printf("Digite um valor de  1 a 10 : ");
     scanf("%d", &valor);
   } while(valor < 0 || valor > 10 );

   for(i = 0; i <= 10; i++){
      printf("%d * %d = %d\n", valor, i, valor * i);
   }
} */


/*aula 67*/
/*
aula 61
int main(){
  float nota1, nota2,nota3;
  char escolha;

  printf("Qual a media deseja?\n a - aritmetica\n p - ponderada\n");
  scanf("%c", &escolha);

  printf("Digite as tres nota: ");
  scanf("%f%f%f",&nota1, &nota2,&nota3);

  if(escolha == 'a' ) {
        printf("Media aritmetica: %.2f\n", (nota1 + nota2 + nota3)/ 3)
  }else {
     if(escolha == 'p'){
        printf("Media ponderada > %.2f\n", (nota1 * 3+ nota2 *3+ nota3 * 4)/10);
     }else{
       printf("\n Opcao invalida\n");
     }
  }
}

*/


/*
 aula 60

int main(){
  int mes;

  printf("Digite um numero : ");
  scanf("%d", &mes);

  switch(mes){
   case 1:
   case 3:
   case 4:
   case 5:
   case 7:
   case 8 :
   case 10 :
   case 12:
        printf("\nO mes possui 31 dias\n");
        break;
    case 2:
        printf("\n O mes possui 28 dias");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n O mes posssui 30 dias\n");
        break;
    default:
        printf("\nValor não correspondente a nenhum mes!"\n);
  }
}

*/
/*
  aula 59
int main(){
  int mes;

  printf("Digite um numero : ");
  scanf("%d", &mes);

  switch(mes){
    case 1 :
        printf("\nJaneiro com 31 dias\n");
        break;
    case 2 :
        printf("\nFevereiro com 28 dias");
        break;
    case 3:
        printf("\nMarco com 31 dias\n");
        break;
    case 4:
       printf("\nAbril com 30 dias\n");
       break;
    case 5:
        printf("\nMaio com 31 dias\n");
        break;
    case 6 :
        printf("\n Junho com 30 dias\n");
        break;
    case 7:
        printf("\nJulho com 31 dias\n");
        break;
    case 8:
        printf("\nAgosto com 31 dias\n");
        break;
    case 9:
        printf("\nOutubro com 31 dias\n");
        break;
    case 10 :
        printf("\nNovembro com 30 dias\n");
        break;
    case 11 :
        printf("\n Dezembro com 31 dias\n");
        break;
    default:
    printf("\nValor nao correspondente a nenhum mes!");
  }

}
*/


/*
   aula 58
int main(){
  char letra;
  printf("Digite um caracater: ");
  scanf("%c", &letra);

  if(letra == 'a' || letra == 'A' || letra == 'e' || letra ==  'E' || letra == 'i' || letra == 'I' || letra == 'O' || letra == 'o' || letra == 'u' || letra == 'U'){
    printf("\tVogal...\n");
  } else {
     printf("\tConsoante\t");
  }
}
*/




/*
// aula 57
int mes;
printf("Digiteum numero :");
scanf("%d", &mes);

switch(mes){
   case 1:
     printf("\nJaneiro\n");
     break;
   case 2:
     printf("\nFevereiro\n");
     break;
    case 3 :
     printf("\nMarco\n")
} */

/*
  Aula 56
  int main(){
   float massa, altura, imc;
   printf("Digite seu peso (em kg) e sua altura (em metros) : ");
   scanf("%f%f", &massa, &altura);

   imc = massa / (altura * altura);

   if(imc < 18.5){
     printf("IMC : %f\t Abaixo do peso\n", imc);
   } else if(imc >= 18.5 && imc < 25){
     printf("IMC: %f\t Peso normal\n ", imc);
   }else if(imc >= 25 &&  imc < 30){
     printf("IMC : %f\tSobrepeso\n", imc);
   }else if(imc >= 30 && imc < 35){
    printf("IMC : %f\t Obesidade grau 1\n",imc);
   }else if(imc >=  35 && imc < 40){
     printf("IMC : %f\t Obesidade grau 2\n",imc);
   }else {
     printf("IMC: %f\t Obesidade grau 3 \n",imc);
   }
 }
*/


/*
  Aula 55
  int main(){
  float valor, valorConvertido;
  int opcao;

  printf("Digite o valor a ser convertido : ");
  scanf("%f", &valor);


  printf("\n1 - Converter de real para dolar\n2 - Converter de dolar para real\n");
  scanf("%d", &opcao);

  switch(opcao){
    case 1 :
        valorConvertido = valor /5.3;
        printf("Valor convertido: $%.2f\n", valorConvertido);
        break;
    case 2 :
       valorConvertido = valor * 5.3;
       printf("Valor convertido : R$%.2f\n", valorConvertido);
       break;
    default:
        printf("\nOpcap invalida!!!\n");
  }


  printf("Valor convertido : %.2f\n",valorConvertido);

}

*/




/*
  Aula 54

  int main(){
    int num;
    printf("Digite um valor qualquer : ");
    scanf("%d", &num);

    if(num % 2 == 0 || num % 3 == 0  || num % 5 == 0){
        printf("Divisivel por 2,3 ou 5.\n");
    } else {
     printf("Não divisivel por 2, 3 e 5.\n");
    }
}


*/


/*
  aula 53

int main(){
   int valor, positive = 0, negative = 0;

   printf("Digite o primeiro valor : ");
   scanf("%d", &valor);


   if(valor < 0){
    negative++;
   }else {
    positive++;
   }


   printf("Digite o segundo valor : ");
   scanf("%d", &valor);

   if(valor < 0){
    negative++;
   }else {
    positive++;
   }


   printf("Digite o terceiro  valor  : ");
   scanf("%d", &valor);

   if(valor < 0){
    negative++;
   }else {
    positive++;
   }


   printf("Digite o quarto  valor  : ");
   scanf("%d", &valor);

   if(valor < 0){
    negative++;
   }else {
    positive++;
   }

   printf("Digite o quinto   valor  : ");
   scanf("%d", &valor);

   if(valor < 0){
    negative++;
   }else {
    positive++;
   }


   printf("\n Positivos : %d\n Negativos : %d \n" , positive, negative);



}
*/



/* aula 52


int main(){


int  a, b, c, small, larger;

printf("Digite tres valores :");
scanf("%d%d%d", &a, &b,&c);


if(a < b){
    if(a < c){
      small = a;
    }else {
      small = c;
    }
}else {
  if(b < c){
    small = b;
  }else {
    small = c;
  }
}

if(a > b){
 if(a > c){
   larger = a;
 }else {
    larger = c;
 }
}else {
  if(b > c ){
    larger = b;
  }else {
    larger = c;
  }
}
printf("Primeira versao\t menor : %d\t maior : %d\n", small,larger);

//////////////////////

    int a1, b1, c1, small1, larger1;

    printf("Digite tres valores: ");
    scanf("%d%d%d",&a1, &b1, &c1);


    small1 = a1;
    larger1 = a1;

    if(small1 > b1){
      small1 =  b1;
    }

    if(small1 > c1){
        small1 =c1;
    }



    if(larger1 < b1){
      larger1 =  b1;
    }

    if(larger1 < c1){
        larger1 =c1;
    }

    printf("Segunda versao \t Menor : %d\t Maior : %d\n", small1, larger1);

}
*/


/* aula 34


int main(){
  int numPessoas;
  float valExpense, tip, totalValue, peopleForValue;
   printf("Enter the amount of the bill, the tip and the number of people : ");
   scanf("%f%f%d", &valExpense, &tip, &peopleForValue);


   totalValue = valExpense * tip/100 + valExpense;
   peopleForValue = totalValue / numPessoas;
   printf("Cada um ira pagar R$%.2f\n", peopleForValue);
   return 0;
}
 */

/* aula 33
int a,b,c;
printf("Digitee dois valores : ");
scanf("%d%d", &a,&b);
printf("Valores lidos : a: %d\tb:%d\n", a, b);
// 10  11
a = a + b;  //  a =  10 + 11 = 21
b = a - b;  // 21 - 11 = 10;
a = a - b; //  21 - 10 = 11
printf("Valores lidos : a: %d\tb:%d\n", a, b);
*/



// três operações de atribuição



/* Aula 32
int main(){
int a,b,c;
printf("Digitee dois valores : ");
scanf("%d%d", &a,&b);
printf("Valores lidos : a: %d\tb:%d\n", a, b);


// três operações de atribuição
c = a; // faz uma cópia de a em c
a = b; // copia de b para a
b = c; //  copia c para b;



printf("Valores lidos : a : %d\tb: %d\n", a , b);
}
*/

/* int main(){

    float x= 1.0;
    printf("Tamanho de um float na memoria %d bytes\n", sizeof(x));
    printf("Tamanho em memmoria de um int: %d bytes\n", sizeof(int));

  return 0;
} */



/*
  Aula 16


int main(){

    float x= 1.0;
    printf("Tamanho de um float na memoria %d bytes\n", sizeof(x));
    printf("Tamanho em memmoria de um int: %d bytes\n", sizeof(int));

  return 0;
}
*/



/*
  Aula 15

  1 bit = pode ser um ou zero;

  8 bits forman um byte
  1024 bytes forman 1 kilobyte
  1024 kilobytes forman 1 megabyte
  1024 megabytes forman 1 gigabyte
  1024 gigabytes forman 1 terabyte
  1024 terabytes forman 1 petabyte
  1024 petabytes forman 1 exabyte
  1024 exabytes forman 1 zettabyte
  1024 zettabytes forman 1 yotabyte

*/

/* Aula 14


int main(){
    char letra1,letra2;
    printf("Digite um caracter : ");
    scanf("%c", &letra1);

    scanf("%c");

    printf("Digite segundo caracter: ");
    scanf("%c", &letra2);

    printf("Primeira : %c\n Segunda : %c\n", letra1, letra2);
    return 0;
}

*/

/*
 Aula 13

int main(){
    char letra1, letra2;
    printf("Digite dois caracteres :");
    scanf("%c %c", &letra1, &letra2);
    printf("Primeira : %c\nSegunda : %c\n", letra1, letra2);

    return 0;
}

*/

/* Aula 12

int main(){
char sexo;
int idade;
float peso,altura;

printf("Digite sua Idade, Peso , Altura e seu Sexo f ou m : ");
scanf("%d%f%f %c", &idade, &peso,&altura,&sexo);
printf("Sexo: %c\nIdade: %d\n Peso: %.2f\nAltura: %.2f\n",sexo,idade,peso,altura);
return 0;
}

*/


/*
   Aula 11

int main(){
 char sexo;
 int idade;
 float peso, altura;

 printf("Digite seu sexo f ou m, idade, peso e altura: ");
 scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
 printf("Sexo: %c\nIdade : %d\nPeso: %.2f\nAltura: %.2f\n", sexo, idade, peso,altura);

 return 0;
}

*/


//int main(){


/*
 Aula 10

 Lendo varios valores com scanf

int  num1, num2, num3;

printf("Difgite tres valore inteiros :  ");
scanf("%d%d%d", &num1, &num2, &num3);
printf("Valores lidos : %d, %d e %d \n", num1, num2, num3);

*/

/*

   Aula 9
   lendo caracteres
   funcao fgetc();

char letra;
printf("Digite uma letra : ");
letra = fgetc(stdin);
printf("Carctere lido : %c \n\n", letra);

*/


/*
   Aula 8
   lendo caracteres
   funcao getc();

char letra;
printf("Digite uma letra : ");
letra = getc(stdin);
printf("Carctere lido : %c \n\n", letra);
*/


/*
   Aula 7
   lendo caracteres
   funcao gechar();
char letra;
printf("Digite uma letra : ");
letra = getchar();
printf("Carctere lido : %c \n\n", letra);

*/




/*
   Aula 6

   Lendo caracteres
char sexo = 's';

printf("Digite seu sexo : %c\n\n", sexo);
printf("Digite seu sexo : (f, F ou m ou M) :");
scanf("%c", &sexo);
printf("Digite seu sexo lido : %c\n\n", sexo);

*/



      /*
           Isso aqui é um
           grande bloco de comentario
    printf("Aprendendo comentarios na linguagem C\n");

    // printf("Hello world!\n");

       */

    /* Aula 5
      Lendo numeros reais

    float numero = 3.1415;
    printf("Valor da minha varialvel: %.4f \n\n", numero);

    printf("Digite um numero real : \n");
    scanf("%f", &numero);
    printf("Valor da minha varialvel: %.4f \n\n", numero);
    printf("Valor lido: %.3f \n\n", numero);

*/


    /*
       Aula 4
      Lendo numeros inteiros
    */
/*
    int valor, valor2; // criei uma varialvel para gardar um valor do tipo inteiro


    valor = 50; // atribuição a -> atribuir valor a uma variavel

    printf("\n\nDigite um valor inteiro : ");
    scanf("%d", &valor);

    printf("\n\nDigite um segundo valor inteiro : ");
    scanf("%d", &valor2);


    printf("\n\n Primeiro valor : %d \n\nSegundo valor : %d\n\n", valor, valor2);*/





  //  return 0;
//}
