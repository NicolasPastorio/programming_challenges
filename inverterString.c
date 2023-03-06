#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Inverter String

int main(){
    char palavra[60];
    int auxiliar = 0;

    printf("Digite uma palavra qualquer: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int fim = tamanho - 1;
  
    for (int i = 0; i < tamanho/2; i++){//dbca
        auxiliar = palavra[i];
        palavra[i] = palavra[fim];
        palavra[fim] = auxiliar;
        fim--;
    }
    
    printf("%s \n", palavra);
	
	system("Pause");

	return 0;
}