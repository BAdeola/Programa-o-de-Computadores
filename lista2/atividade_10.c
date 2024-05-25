#include <stdio.h>

int main(){
    double capital, juros, montante;
    int anos;

    printf("Digite o capital inicial do investimento: ");
    scanf("%lf", &capital);
    printf("Digite a taxa de juros anual: ");
    scanf("%lf", &juros);
    printf("Digite o período de investimento em anos: ");
    scanf("%d", &anos);

    montante = capital * pow((1 + juros / 100), anos);

    printf("O montante final do investimento será de R$%.2f\n", montante);

    return 0;
}