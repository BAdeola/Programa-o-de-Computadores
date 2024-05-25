#include <stdio.h>

int main(){
    float nota1, nota2, media, mediaPonderada;

    printf("Por favor, insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    mediaPonderada = (nota1*3+nota2*5)/(3+5);

    printf("A sua m�dia aritm�tica � %.2f e sua nota ponderada � %.2f", media, mediaPonderada);
    return 0;
}
