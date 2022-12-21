#include <stdio.h>

int main(){
    int i = 1;
    int soma = 0;

    while(i <= 100){
        soma += i;
        i++;
    }
    printf("O resultado da soma de todos os valores de 1 a 100:\n");
    printf("%d\n", soma);

    return 0;
}