#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float celsius, fah;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fah = (celsius * 9 / 5) + 32;

    printf("A temperatura em fahrenheit é %.2f°F", fah);

    return 0;
}