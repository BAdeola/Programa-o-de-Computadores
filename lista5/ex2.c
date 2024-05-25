//Média de notas: Faça um programa que permita ao usuário inserir as notas de 6
//alunos e, em seguida, calcule e exiba a média dessas notas.

#include <stdio.h>

int main(){
    int soma=0, num[5], i;
    float media;

    for (i = 0; i < 6; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
        soma+=num[i];
    }
    
    media=soma/6;

    printf("O resultado da média das notas inseridas será: %2.f", media);
    return 0;
}