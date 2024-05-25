#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario;

    printf("Qual o seu salário?\n");
    scanf("%f", &salario);

    if (salario>2000.00) {
        printf("Sua taxa de crádito será de 2%% sendo: R$%.2f", salario*0.02);
    } else if (1000.00<salario && salario<=2000.00) {
        printf("Sua taxa de crédito será 1.5%% sendo: R$%.2f", salario*0.015);
    } else if (500.00<salario && salario<=1000.00){
        printf("Sua taxa de crédito será 1%% sendo: R$%.2f", salario*0.01);
    } else {
        printf("Sua taxa de crédito será 0.75%% sendo: R$%.2f", salario*0.0075);
    }

    return 0;
}