#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int codigo;

    printf("Qual o código do seu prodtuo?\n");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1:
        printf("Seu produto é um Alimento não Perecível.");
        break;
    case 2:
        printf("Seu produto é um Alimento Perecível.");
        break;
    case 3:
        printf("Seu produto é um Alimento Perecível.");
        break;
    case 4:
        printf("Seu produto é um Alimento Perecível.");
        break;
    case 5:
        printf("Seu produto é um Vestuário.");
        break;
    case 6:
        printf("Seu produto é um Vestuário.");
        break;
    case 7:
        printf("Seu produto é para Higiene Pessoal.");
        break;
    case 8:
        printf("Seu produto é de Limpeza e Utensílios domésticos.");
        break;
    case 9:
        printf("Seu produto é de Limpeza e Utensílios domésticos.");
        break;
    default:
        printf("Código inválido, por gentileza selecionar código entre 1 e 9.");
        break;
    }
}