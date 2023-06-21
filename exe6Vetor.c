/*Criar um programa que leia um caracter e uma string e escreva SIM se o caracter for encontrado no string e NÃO caso contrário. */

#include <stdio.h>
#include <string.h>

int main()
{
    char letra, string[20];
    printf("Digite um caracter:");
    scanf("%c", &letra);
    fflush(stdin);
    printf("Digite uma frase com até 20 caracteres:");
    gets(string);

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == letra)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NÃO\n");
        }
    }
}