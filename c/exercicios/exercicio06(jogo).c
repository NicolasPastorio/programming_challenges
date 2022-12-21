#include <stdio.h>

int main(){
    int numerosecreto = 30;

    printf("-----------------------------------\n");
    printf("|{^_^}/Adivinhe o numero secreto...\n");
    printf("-----------------------------------\n");

    int tentativa = 1;
    int chute;

    while(1){
        printf("%d° tentativa|\n", tentativa);

        printf("Qual seu palpite? ");
        scanf("%d", &chute);

        if(chute <= 0){
            printf("Use apenas numeros positivos!:|\n");
            continue;
        }else if(chute == numerosecreto){
            printf("Parabens! Voce acertou!:)\n");
            break;
        }else if(chute > numerosecreto){
            printf("Errou:(\n");
            printf("Tente um valor menor ;)\n");
        }else{
            printf("Errou:(\n");
            printf("Tente um valor maior ;)\n");
        }
        printf("-----------------------------------\n");
        tentativa++;
    }
    printf("Ganhou o jogo com %d tentativas\n", tentativa);
    printf("-----------------------------------\n");
    
    return 0;
}