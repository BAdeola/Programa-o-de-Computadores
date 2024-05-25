#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int mes, dias;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            printf("Digite o ano: ");
            int ano;
            scanf("%d", &ano);
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                dias = 29;
            else
                dias = 28;
            break;
        default:
            printf("Mês inválido!");
            return 1;
    }

    printf("O mês %d tem %d dias.", mes, dias);

    return 0;
}