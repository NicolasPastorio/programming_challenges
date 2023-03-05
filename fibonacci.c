
#include <stdio.h>
#include <stdlib.h>
//Fibonacci
int main(){
	system("Color 02");
	
	int quantidadeDeTermos = 0, valor1 = 0, valor2 = 1;
    int proximoTermo = 0;
	
	printf("------------------------------------------\n");
	printf("Informe a quantidade de termos: ");
	scanf("%d", &quantidadeDeTermos);
    
    printf("\n Sequencia de Fibonaci: \n");

	for(int i = 1; i <= quantidadeDeTermos; i++){
        printf("%d, ", valor1);
       
        proximoTermo = valor1 + valor2;
        valor1 = valor2;
        valor2 = proximoTermo;
    }

    printf("\n");
	printf("------------------------------------------\n");
	
	
	
	system("Pause");
	return 0;
}