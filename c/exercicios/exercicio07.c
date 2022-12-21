#include <stdio.h>

int main(){

  int numero;

  printf("Informe um número: ");
  scanf("%d", &numero);

  printf("---TABUADA DO %d---\n", numero);
  for (int i = 1; i < 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
}
