#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, soma=0, qntd=0;
    float media;

    do {
        printf("Digite um número inteiro e positivo (digite um número negativo para sair)\n");
        scanf("%d", &numero);

        if (numero>0)
        {
            qntd+=1;
            soma+=numero;
        }
    } while (numero>=0);

    media=(float)soma/qntd;
    
    if(qntd > 0) {
        media = (float)soma / qntd;
        printf("A soma dos números é: %d\n", soma);
        printf("A média dos números é: %.2f\n", media);
    } else {
        printf("Nenhum número positivo foi inserido.\n");
    }

    return 0;
}