//Contagem de pares e ímpares: Faça um programa que conte e exiba a
//quantidade de números pares e ímpares em um vetor de inteiros de tamanho
//20.

#include <stdio.h>

int main(){
    int pares=0, impares=0, num[20]={87, 23, 56, 12, 98, 34, 72, 45, 63, 29, 50, 88, 17, 40, 91, 68, 75, 31, 55, 82}, i;

    for (i = 0; i < 20; i++) {
        if (num[i]%2==0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("A quantidade de pares no vetor é: %d\n", pares);
    printf("A quantidade de impares no vetor é: %d", impares);

    return 0;
}