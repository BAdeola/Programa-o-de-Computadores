//Soma de elementos: Escreva um programa que solicite ao usuário que insira 5
//números inteiros e, em seguida, calcule e exiba a soma e a média aritmética
//desses números.

#include <stdio.h>

int main(){
    int soma=0, num[5], i;
    float media;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
        soma+=num[i];
    }

    media=soma/5;

    printf("O resultado da soma dos números inseridos será: %d", soma);
    printf("O resultado da média dos números inseridos será: %2.f", media);
    return 0;
}