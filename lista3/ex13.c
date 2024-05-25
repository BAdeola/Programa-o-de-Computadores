#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2;
    int codigo;

    printf("Escolha 2 números.");
    scanf("%f %f", &n1, &n2);
    printf("Selecione o código operação que será feita:\n1-Adição;\n2-Subtração;\n3-Multiplicação;\n4-Divisão;");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1:
        printf("A soma dos dois número será %f", n1+n2);
        break;
    case 2:
        printf("A subtração dos dois número será %f", n1-n2);
        break;
    case 3:
        printf("A multiplicação dos dois número será %f", n1*n2);
        break;
    case 4:
        printf("A divisão dos dois número será %f", n1/n2);
        break;
    default:
        printf("Código inválido, selecione um número entre 1 e 4");
        break;
    }

    return 0;
}