#include <stdio.h>
#include <math.h>

int main(){
    float aresta, volume;
    printf("Qual o tamanho a aresta do cubo? (cm) ");
    scanf("%f", &aresta);

    volume=pow(aresta, 3);

    printf("O volume do cubo é de %.2fcm³", volume);

    return 0;
}