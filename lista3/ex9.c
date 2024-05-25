#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int N1, N2, escolha;

    printf("Entre com o primeiro número inteiro (N1): ");
    scanf("%d", &N1);
    printf("Entre com o segundo número inteiro (N2): ");
    scanf("%d", &N2);

    printf("O que deseja fazer?\n[1] Retornar o maior\n[2] Retornar o menor\n[3] Calcular a potência de N1 elevado a N2\nEscolha uma opção: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Resposta: %d\n", (N1 > N2) ? N1 : N2);
        if (N1>N2) {
            printf("%d é maior que %d", N1, N2);
        } else {
            printf("%d é maior que %d", N2, N1);
        }
    } else if (escolha == 2) {
        printf("Resposta: %d\n", (N1 < N2) ? N1 : N2);
    } else if (escolha == 3) {
        printf("Resposta: %d\n", (int)pow(N1, N2));
    } else {
        printf("Opção inválida!\n");
    }

    return 0;

}
