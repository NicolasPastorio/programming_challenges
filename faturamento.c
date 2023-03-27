#include <stdio.h>
#include <stdlib.h>

int main(){
    float faturamento[31] = {4177.63, 6162.50, 5916.73, 0, 0, 1536.23, 7141.27, 5777.81, 8249.20, 8618.12, 0, 0, 4987.12, 8177.25, 5548.82, 8177.84, 5026.28, 0, 0, 6285.39, 4102.21, 6223.14, 7034.68, 4530.26, 0, 0, 5041.30, 7470.15, 6515.62, 6805.54, 99000.72};
    float menor = faturamento[0];
    int indiceMenor = 0;

    float maior = faturamento[0];
    int indiceMaior = 0;

    float soma = 0; 
    int diasSemFaturamento = 0;
    int diasComFaturamento = 0;
    float media = 0;

    int diasSuperioresMediaMensal = 0;

    for (int i = 0; i < 31; i++){
        if(faturamento[i] == 0){
            diasSemFaturamento++;
        }else{
            diasComFaturamento++;
        }

        if(faturamento[i] != 0.0 && menor > faturamento[i]){
            menor = faturamento[i];
            indiceMenor = i;
        }
        if(maior < faturamento[i]){
            maior = faturamento[i];
            indiceMaior = i;
        }

        soma = soma + faturamento[i];
    }

    media = soma/diasComFaturamento;

    for (int i = 0; i < 31; i++){
        if(faturamento[i] > media){
            diasSuperioresMediaMensal++;
        }
    }

    printf("O menor valor de faturamento ocorreu no dia %d e foi R$%.1f\n", indiceMenor + 1, menor);
    printf("O maior valor de faturamento ocorreu no dia %d e foi R$%.1f\n", indiceMaior + 1, maior);
    printf("A media mensal de faturamento foi superada %d vez(es) no mes!\n", diasSuperioresMediaMensal);
    
    return 0;
}