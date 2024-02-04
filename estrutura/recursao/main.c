#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
  if(n == 1){
    return 1;
  }else{
    int fat =  n * fatorial(n - 1);
    return fat;
  }
}

int main()
{

    int  a = fatorial(4);
    printf("%d", a);

    return 0;
}
