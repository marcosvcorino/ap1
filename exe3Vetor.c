/*Leia um texto pela entrada padrão com no máximo 20 caracteres. Em seguida imprima o número de caracteres digitados. */

#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    int tamanho=0;

    puts("Informe uma frase com no máximo 20 caracteres:");
    gets(string);
    tamanho=strlen(string);
    puts("A frase digitada é:");
    puts(string);
    printf("A frase informada contem %i caracteres", tamanho);
}