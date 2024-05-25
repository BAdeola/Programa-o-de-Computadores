#include <stdio.h>

int main(){
    int linhas, colunas;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas], i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);   
        }
    }

    for (i = 0; i < linhas; i++) {
        int soma=0;
        for (j = 0; j < colunas; j++){
            soma+=matriz[i][j];
        }
        printf("Soma dos elementos da linha %d: %d \n", i, soma);
    }
    
    return 0;
}