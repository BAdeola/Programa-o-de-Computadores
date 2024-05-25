#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, desconto;
    printf("Digite seu salário atual em reais: ");
    scanf("%f", &salario);

    if (salario<1045.00) {
        desconto=salario*0.075;
    } else if (salario>=1045.01 && salario<2089.60) {
        desconto=salario*0.09;
    } else if (salario>=2089.61 && salario<3134.40) {
        desconto=salario*0.12;
    } else if (salario>=3134.41 && salario<6101.66){
        desconto=salario*0.14;
    } else {
        desconto=salario-854.15;
    }

    printf("Seu desconto do inss será de R$%.2f", desconto);

    return 0;
}
