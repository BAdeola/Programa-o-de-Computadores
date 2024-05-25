#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    printf("Qual seu sal�rio atual? (R$): ");
    scanf("%f", &salario);

    if (salario<1500.00){
        salario=salario*1.15;
    } else if (2000.00>=salario && salario>=1500.00) {
        salario=salario*1.10;
    } else {
        salario=salario*1.05;
    }

    printf("Seu sal�rio ser� reajustado para R$%.2f", salario);
    return 0;
}
