#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int cdg;
    float preco;

    printf("Digite o código do produto. (1 a 5) ");
    scanf("%d", &cdg);
    printf("Digite o preço do produto. ");
    scanf("%f",&preco);

    switch (cdg) {
    case 1:
        printf("Seu produto é do sul e tem o preço de R$%.2f", preco);
        break;
    case 2:
        printf("Seu produto é do sudeste e tem o preço de R$%.2f", preco);
        break;
    case 3:
        printf("Seu produto é do centro-oeste e tem o preço de R$%.2f", preco);
        break;
    case 4:
        printf("Seu produto é do norte e tem o preço de R$%.2f", preco);
        break;
    case 5:
        printf("Seu produto é do nordeste e tem o preço de R$%.2f", preco);
        break;
    default:
        printf("O código é inválido, selecione um valor entre 1 r 5.");
        break;
    }

    return 0;
}