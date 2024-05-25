#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero, fatorial = 1, i;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O fatorial de 0 é 1\n");
    } else {
        for (i = numero; i >= 1; i--) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}