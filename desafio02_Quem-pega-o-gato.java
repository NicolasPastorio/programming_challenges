
package com.Nicolas.aulaJava;

import java.util.Scanner;

public class testeDesafio02 {
    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        
        //variáveis
        int posicaoBob = 0, posicaoRex = 0, posicaoOli = 0;
        //int distancia = 0;
        int distanciaRex = 0, distanciaBob = 0;
        int distanciaMenor = 0;
        String vencedor = "";
        
        //Infromações
        System.out.println("O gato Oli está se alimentando e dois");
        System.out.println("cachorros, Bob e Rex o viram e querem pegá-lo!");
        System.out.println("Informe suas posições e vejamos quem sairá vitorioso!");
        System.out.println("OBS: só valem valores positivos e inteiros para eles!");
        System.out.println("--------------Marco da rua--------------");
        System.out.println("0m======================================100m");
        
        //do-while para valores >= 0 && <= 100
        //valores de Bob
        do{
           System.out.print("Posição de Bob: ");
           posicaoBob = ler.nextInt(); 
        }while(posicaoBob < 0 || posicaoBob > 100);
        //valores de Rex
        do{
           System.out.print("Posição de Rex: ");
           posicaoRex = ler.nextInt(); 
        }while(posicaoRex < 0 || posicaoRex > 100);
        //valores de Oli
        do{
           System.out.print("Posição de Oli: ");
           posicaoOli = ler.nextInt();
        }while(posicaoOli < 0 || posicaoOli > 100); 
        
        //if's da distância do Bob
        if(posicaoBob < posicaoOli){
            distanciaBob = posicaoOli - posicaoBob;
        }else if(posicaoBob > posicaoOli){
            distanciaBob = posicaoBob - posicaoOli;
        }
        //if's da distância do Rex
        if(posicaoRex < posicaoOli){
            distanciaRex = posicaoOli - posicaoRex;
        }else if(posicaoRex > posicaoOli){
            distanciaRex = posicaoRex - posicaoOli;
        }
        
        //comparação entre a distância do Bob e do Rex
        if(distanciaBob == distanciaRex){
            //Oli escapa
            vencedor = "Oli";
            distanciaMenor = distanciaBob;
        }else if(distanciaBob > distanciaRex){
            //Rex vence
            vencedor = "Rex";
            distanciaMenor = distanciaRex;
        }else if(distanciaBob < distanciaRex){
            //Bob vence
            vencedor = "Bob";
            distanciaMenor = distanciaBob;
        }
        //corrida
        if((posicaoBob < posicaoOli) && (posicaoRex < posicaoOli)) {
            for (int i = 0; i <= distanciaMenor; i++) {
                //Bob
                for (int j = 0; j < posicaoBob; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("B");
                for (int j = 0; j < distanciaBob; j++) {
                    System.out.print("=");
                }
                System.out.print("O");
                //============================
                for (int j = posicaoOli; j <= 100; j++) {
                    System.out.print("=");
                }
                System.out.println("");
                distanciaBob--;
                //Rex
                for (int j = 0; j < posicaoRex; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("R");
                for (int j = 0; j < distanciaRex; j++) {
                    System.out.print("=");
                }
                System.out.print("O");
                //============================
                for (int j = posicaoOli; j <= 100; j++) {
                    System.out.print("=");
                }
                distanciaRex--;
                System.out.println(""); 
                posicaoBob++;
                posicaoRex++;
            }
        }else if((posicaoBob < posicaoOli) && (posicaoRex > posicaoOli)) {
            for (int i = 0; i <= distanciaMenor; i++) {
                //Bob
                for (int j = 0; j < posicaoBob; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("B");
                for (int j = 1; j < distanciaBob; j++) {
                    System.out.print("=");
                }
                System.out.print("O");
                //============================
                for (int j = posicaoOli; j <= 100; j++) {
                    System.out.print("=");
                }
                System.out.println("");
                distanciaBob--;
                //Rex
                for (int j = 0; j < posicaoOli; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("O");
                for (int j = 0; j < distanciaRex; j++) {
                    System.out.print("=");
                }
                System.out.print("R");
                //============================
                for (int j = distanciaRex+posicaoOli; j < 100; j++) {
                    System.out.print("=");
                }
                distanciaRex--;
                System.out.println("");
                posicaoBob++;
                posicaoRex++;
            }
        }else if((posicaoBob > posicaoOli) && (posicaoRex < posicaoOli)){
            for (int i = posicaoBob; i >= posicaoOli; i--) {
                //Bob
                for (int j = 0; j < posicaoOli; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("O");
                for (int j = 0; j < distanciaBob; j++) {
                    System.out.print("=");
                }
                System.out.print("B");
                //============================
                for (int j = distanciaBob+posicaoOli; j < 100; j++) {
                    System.out.print("=");
                }
                System.out.println("");
                distanciaBob--;
                //Rex
                for (int j = 0; j < posicaoRex; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("R");
                for (int j = 1; j < distanciaRex; j++) {
                    System.out.print("=");
                }
                System.out.print("O");
                //============================
                for (int j = posicaoOli; j <= 100; j++) {
                    System.out.print("=");
                }
                distanciaRex--;
                System.out.println("");
                posicaoBob++;
                posicaoRex++;
            }
        }
        
        else if((posicaoBob > posicaoOli) && (posicaoRex > posicaoOli)){
            for (int i = 0; i <= distanciaMenor; i++) {
                //Bob
                for (int j = 0; j <= posicaoOli; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("O");
                for (int j = 0; j < distanciaBob; j++) {
                    System.out.print("=");
                }
                System.out.print("B");
                //============================
                for (int j = distanciaBob+posicaoOli; j < 100; j++) {
                    System.out.print("=");
                }
                System.out.println("");
                distanciaBob--;
                //Rex
                for (int j = 0; j <= posicaoOli; j++) {
                    System.out.print("=");
                }
                //============================
                System.out.print("O");
                for (int j = 0; j < distanciaRex; j++) {
                    System.out.print("=");
                }
                System.out.print("R");
                //============================
                for (int j = distanciaRex+posicaoOli; j < 100; j++) {
                    System.out.print("=");
                }
                distanciaRex--;
                System.out.println("");
            }
        }
        
        //Resultado
        if(vencedor == "Rex")
            System.out.println("Rex alcançou o Oli!");
        else if(vencedor == "Bob")
            System.out.println("Bob alcançou o Oli!");
        else if(vencedor == "Oli")
            System.out.println("O Oli escapou!");
    }
}
