//Pesquisa linear: Escreva um programa que solicite ao usuário que insira 10
//números inteiros e um valor alvo, e então pesquise se o valor alvo está presente
//no vetor e exiba sua posição, se encontrado.

#include <stdio.h>

int main(){
    int num[10], i, alvo, encontrado=0, posicao=-1;

    for (i = 0; i < 10; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("Digite um número alvo.");
    scanf("%d", &alvo);

    for (i = 0; i < 10; i++) {
        if (alvo == num[i]) {
            encontrado=1;
            posicao=i;
            break;
        }
    }
    
    if (encontrado==1) {
        printf("O valor alvo %d foi encontrado na posicao %d.\n", alvo, posicao+1);
    } else {
        printf("O valor alvo %d nao foi encontrado no vetor.\n", alvo);
    }

    return 0;
}