#include <stdio.h>

int main(){
    float media, nota1, nota2, nota3;

    printf("Insira as notas em ordem: ");
    scanf("%f""%f""%f", &nota1, &nota2, &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A média geral das 3 notas é %.2f", media);

    return 0;
}