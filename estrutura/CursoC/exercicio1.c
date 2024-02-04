int main(){
 char sexo;
 int idade;
 float peso, altura;

 printf("Digite seu sexo f ou m, idade, peso e altura: ");
 scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
 printf("Sexo: %c\nIdade : %d\nPeso: %.2f\nAltura: %.2f\n", sexo, idade, peso,altura);

 return 0;
}
