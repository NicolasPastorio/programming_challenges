//CIFRA DE CESAR
package com.Nicolas.aulaJava;

import java.util.Scanner;

public class Desafio01 {
    public static String encriptar(int chave, String texto){
        StringBuilder textoCifrado = new StringBuilder();
        int tamanhoTexto = texto.length();
        
        for (int c = 0; c < tamanhoTexto; c++) {
            int letraCifradaASCII = ((int) texto.charAt(c)) + chave;
            while (letraCifradaASCII > 126){
                letraCifradaASCII -= 94;
            }
            textoCifrado.append((char) letraCifradaASCII);
        }
        return textoCifrado.toString();
    }
    
    public static void main(String[] args){
           Scanner ler = new Scanner(System.in);
           
           System.out.print("Texto: ");
           String texto = ler.nextLine();
           System.out.print("Rotações: ");
           int chave = ler.nextInt();
           
           String textoCriptografado = encriptar(chave, texto);
           
           System.out.println("Resultado: "+textoCriptografado);
    }
}
