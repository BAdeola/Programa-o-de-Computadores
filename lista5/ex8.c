//Fibonacci com vetor: Implemente um programa que gere e exiba os primeiros
//10 números da sequência de Fibonacci usando um vetor.

#include <stdio.h>

int main(){
    int num[10], i;

    num[0] = 0;
    num[1] = 1;

    for (i = 2; i < 10; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }

    printf("Os primeiros 10 numeros da sequencia de Fibonacci sao:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}