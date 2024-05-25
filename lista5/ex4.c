//Ordenação crescente: Crie um programa que solicite ao usuário que insira 5
//números inteiros e, em seguida, ordene esses números em ordem crescente e
//os exiba.

#include <stdio.h>

int main(){
    int num[5], i, temp, j;

    for (i = 0; i < 5; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Numeros ordenados em ordem crescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}