#include <stdio.h>

int main(){
    int x, y;

    //capturando valores do usuário
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &y);

    int valorMultiplicado = x * y;

    printf("O resultado de %d x %d e %d!\n", x, y, valorMultiplicado);

    return 0;
}