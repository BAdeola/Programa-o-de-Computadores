#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cdg;
    printf("Digite o código do livro, 1 ou 2 ");
    scanf("%d", &cdg);

    if (cdg == 1){
        printf("Seu livro é de ficção");
    } else if (cdg==2){
        printf("Seu livro é de não-ficção");
    } else {
        printf("Código inválido! Selecione apenas 1 ou 2");
    }
}