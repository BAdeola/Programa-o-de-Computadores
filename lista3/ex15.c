#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float raio, lado, base, altura, area;

    // Exibe o menu de opções
    printf("Escolha a opcao desejada:\n");
    printf("1- Circulo\n");
    printf("2- Quadrado\n");
    printf("3- Retangulo\n");
    printf("4- Triangulo\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o raio do circulo: ");
            scanf("%f", &raio);
            area = M_PI * raio * raio;
            break;
        case 2:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            break;
        case 3:
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            break;
        case 4:
            printf("Digite a base do triangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            break;
        default:
            printf("Opção invalida!");
            return 1;
    }

    printf("A área calculada é: %.2f\n", area);

    return 0;
}