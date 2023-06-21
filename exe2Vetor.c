/*Faça um programa que então leia uma string e a imprima. */

#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    int tamanho=0;

    puts("Informe uma frase:");
    gets(string);
    puts("A frase digitada é:");
    puts(string);
}