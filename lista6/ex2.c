#include <stdio.h>

int main(){
    int matriz[5][3], i, j, soma;
    float media;

    printf("Insira os número da matriz: \n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);   
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            soma+=matriz[i][j];
        }
    }
    
    media=soma/(5*3);

    printf("A média dessa matriz é: %2.f", media);
    
    return 0;
}