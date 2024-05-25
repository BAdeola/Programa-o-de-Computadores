#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    float resultado;

    printf("Digite 2 número inteiros.\n");
    scanf("%d %d", &n1, &n2);

    if (n1>n2) {
        resultado=pow(n1, n2);
        printf("O resultado de N1 elevado a N2 é %.2f", resultado);
    } else {
        resultado=pow(n2, n1);
        printf("O resultado de N1 elevado a N2 é %.2f", resultado);
    }
    
    return 0;
}