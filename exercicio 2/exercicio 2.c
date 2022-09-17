#include <stdio.h>
#include<stdlib.h>

int main() {
  long int x,y,somar;
  int termo,contador;
  double auxiliar;

  printf(" Da sequencia de Fibonacci quantos termos devem ser exibidos:");
  scanf("%d", &termo);

  if (termo <= 1) {
    printf("Número de termos inválido\n");
  }
  else {
    
    x = 1;
    y = 1;
    contador = 2;
    printf("\n1\n1\n");

    while(contador < termo) {
      somar = x + y;
      auxiliar = somar;
      auxiliar = auxiliar/y;
      printf("%ld\n ", somar );
      x = y;
      y = somar;
      contador ++;
      
    }
  }

  return(0);
}