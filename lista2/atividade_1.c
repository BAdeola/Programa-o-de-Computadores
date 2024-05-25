#include <stdio.h>

int main(){
    int horas, minutos, segundos, tempoTotal;

    printf("Insira o tempo em horas: ");
    scanf("%d", &horas);

    tempoTotal = horas*3600;
    minutos = tempoTotal/60;
    segundos = tempoTotal%60;

    printf("%d horas é equivalente a %d minutos e %d segundos", horas, minutos, segundos);
    return 0;
}
