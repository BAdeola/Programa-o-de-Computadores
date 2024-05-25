//Maior elemento: Escreva um programa que encontre e exiba o maior elemento
//em um vetor de inteiros de tamanho 10.

#include <stdio.h>

int main(){
    int maior, num[10] = {78, 23, 45, 12, 56, 90, 34, 67, 89, 100}, i;
    maior = num[0];

    for (i = 0; i < 10; i++) {
        if (maior<num[i]) {
         maior=num[i];   
        }
    }
    
    printf("O maior número do vetor é: %d", maior);

    return 0;
}