#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //Imprime o cabeçalho do nosso jogo
  printf("\n");
  printf("              P             \n");
  printf("          P  /_\\  P        \n");
  printf("         /_\\_|_|_/_\\      \n");
  printf("     n_n | ||. .|| | n_n    \n");
  printf("     |_|_|nnnn nnnn|_|_|    \n");
  printf("    |" "  |  |_|  |"  " |   \n");
  printf("    |_____| ' _ ' |_____|   \n");
  printf("          \\__|_|__/         \n");
  printf("         Bem vindo ao       \n");
  printf("     Jogo de Adivinhacao!   \n");
  //-----------------------------
  int segundos = time(0);
  srand(segundos);
  int numerogrande = rand();
  //-----------------------------
  int numerosecreto = numerogrande % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;
  //quantidade inicial de pontos
  double pontos = 1000;
  double pontosperdidos = 0;
  int acertou = 0;
  //-----------------------------
  int nivel;
  printf("Qual o nivel de dificuldade? \n");
  printf("(1)Facil (2)Médio (3)Dificil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);
  //-----------------------------
  int numerodetentativas;
  switch(nivel){
    case 1:
      printf("Nivel Facil...\n");
      numerodetentativas = 20;
      break;
    case 2:
      printf("Nivel Medio...\n");
      numerodetentativas = 15;
      break;
    default:
      printf("Nivel Dificil...\n");
      numerodetentativas = 6;
  }
  //-----------------------------

  for(int i = 1; i <= numerodetentativas; i++){
    printf("------------------------------\n");
    printf("Tentativa %d!\n", tentativas);

    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute < 0){
      printf("Voce nao pode chutar numeros negativos!\n");
      continue;
    }

    acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou){
      break;
    }else if(maior){
        printf("Seu numero foi maior que o numero secreto!\n");
    }else{
      printf("Seu numero foi menor que o numero secreto!\n");
    }
    tentativas++;
    printf("------------------------------\n");

    pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }

  printf("Fim de jogo!\n");
  //-----------------------------
  if(acertou){
    printf("Voce ganhou!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("Totalde pontos %.1f\n\n", pontos);
    printf("              OOOOOOOOOOO              \n");
    printf("         OOOOOOOOOOOOOOOOOOO           \n");
    printf("       OOOOOO  OOOOOOOOO  OOOOOO       \n");
    printf("     OOOOOO      OOOOO      OOOOOO     \n");
    printf("   OOOOOOOO  #   OOOOO  #   OOOOOOOO   \n");
    printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO  \n");
    printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
    printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO \n");
    printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
    printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO   \n");
    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
    printf("     OOOOOO   OOOOOOOOO   OOOOOO       \n");
    printf("        OOOOOO         OOOOOO          \n");
    printf("             OOOOOOOOOOOO              \n");
    printf("\n\n");
  }else{
    printf("\n\n");
    printf("Voce perdeu! Tente de novo.\n");
    printf("    \\|/ ____ \\|/    \n");
    printf("     @~/ ,. \\~@      \n");
    printf("    /_( \\__/ )_\\     \n");
    printf("       \\__U_/        \n");
  }
  //-----------------------------

  return 0;
}
