#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    switch (ano % 400) {
        case 0:
            printf("%d é um ano bissexto.\n", ano);
            break;
        default:
            switch (ano % 100) {
                case 0:
                    printf("%d não é um ano bissexto.\n", ano);
                    break;
                default:
                    switch (ano % 4) {
                        case 0:
                            printf("%d é um ano bissexto.\n", ano);
                            break;
                        default:
                            printf("%d não é um ano bissexto.\n", ano);
                            break;
                    }
                    break;
            }
            break;
    }

    return 0;
}