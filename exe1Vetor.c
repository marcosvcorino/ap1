/*Escreva um programa em C que solicite ao usuário 5 números inteiros 
e armazene-os em um vetor. Em seguida, o programa deve exibir os 
números digitados pelo usuário na ordem inversa.​*/

#include<stdio.h>

int main(){
    int numeros[5],i;
    do{
        for(i=0;i<=4;i++)
        {
            printf("Insira o %iº número:",i+1);
            scanf("%i", &numeros[i]);
        }
    }while(i<=4);
    printf("-----------------------------\n");
    for(i=4;i>=0;i--)
        printf("O %iº número digitado foi:%i\n",i+1,numeros[i]);
}