#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float cm, m;

    printf("Coloque a distância percorrida em metros (m): ");
    scanf("%f", &m);

    cm=m*100;

    printf("A distância percorrida em cm foi de %.2fcm", cm);

    return 0;
}