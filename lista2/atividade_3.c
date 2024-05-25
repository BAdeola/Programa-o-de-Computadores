#include <stdio.h>
//#include <locale.h>

int main(){
    //setlocale(LC_ALL, "Portuguese");
    
    float base, altura, area;

    printf("Insira a base do retângulo: ");
    scanf("%f", &base);
    printf("Insira a altura do retângulo: ");
    scanf("%f", &altura);

    area = base*altura;

    printf("A área do retângulo é %.2f", area);
    return 0;
}
