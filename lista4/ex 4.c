#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero inteiro.\n");
    scanf("%d", &numero);

    while (numero != 0){
        int resultado = numero +2;

        printf("O resultado � %d\n", resultado);

        printf("Por favor, insira um novo n�mero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");
    return 0;
}