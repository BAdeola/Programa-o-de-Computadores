#include <stdio.h>

int main(){
    float lado, perimetro;

    printf("Insira a medida do lado do quadrado (cm): ");
    scanf("%f", &lado);

    perimetro = lado*4;

    printf("O perímetro do quadrado é %.2f", perimetro);

    return 0;
}