#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Insira um número inteiro.\n");
    scanf("%d", &numero);

    if (numero%2 == 0) {
        printf("Seu número é par.");
    } else {
        printf("Seu número é ímpar.");
    }

    return 0;
}