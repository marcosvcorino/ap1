/*Declare duas strings com capacidade para 20 caracteres.
Leia pela entrada padrão a primeira string. 
Em seguida, copie o texto da primeira string para a segunda. 
Imprima no final o conteúdo das duas strings.​*/
#include<stdio.h>
#include<string.h>

int main()
{
    char string1[20],string2[20];
    puts("Digite a primeira frase:");
    gets(string1);
    strcpy(string2,string1);
    puts("O conteudo da primeira string é:");
    puts(string1);
    puts("O conteudo da segunda string é:");
    puts(string2);
}