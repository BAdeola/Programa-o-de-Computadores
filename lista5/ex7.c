//Inversão de elementos: Crie um programa que insira 10 números inteiros em
//um vetor e inverta a ordem desses números, exibindo o vetor resultante

#include <stdio.h>

int main(){
    int num[10], i, temp;

    for (i = 0; i < 10; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10 / 2; i++) {
        temp = num[i];
        num[i] = num[10 -1 - i];
        num[10 - 1 -i] = temp;
    }

    printf("Vetor invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}