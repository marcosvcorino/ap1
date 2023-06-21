/*Leia duas strings. 
Se as strings forem iguais escreva “strings iguais”. 
Caso contrário, concatene as duas strings e imprima 
a string resultante em maiúsculo.​*/

#include<stdio.h>
#include<string.h>

int main()
{
    char string1[20],string2[20];
    puts("Digite a primeira string:");
    gets(string1);
    puts("Digite a segunda string:");
    gets(string2);

    if(strcmp(string1,string2)==0)
        puts("As strings são iguais");
    else{
        strcat(string1,string2);
        strupr(string1);
        puts("As strings concatenadas, transformadas em maiúsculo resultam em:");
        puts(string1);
    }
}