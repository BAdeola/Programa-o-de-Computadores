#include <stdio.h>

int main(){
    float km, m;

    printf("Insira a velocidade em Km/h: ");
    scanf("%f", &km);

    m = (km * 1000) / 3600;

    printf("O valor da velocidade é %.2fm/s.", m);

    return 0;
}