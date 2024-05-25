#include <stdio.h>

void lerMatriz(int linhas, int colunas, int matriz[linhas][colunas], char nome) {
    int i, j;

    printf("Digite os elementos da matriz %c:\n", nome);
    
    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somarMatrizes(int linhas, int colunas, int matrizA[linhas][colunas], int matrizB[linhas][colunas], int matrizSoma[linhas][colunas]) {
    int i, j;

    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void exibirMatriz(int linhas, int colunas, int matriz[linhas][colunas], char nome) {
    int i, j;

    printf("Matriz %c:\n", nome);

    for (i=0; i<linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linhas, colunas;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizSoma[linhas][colunas];

    lerMatriz(linhas, colunas, matrizA, 'A');
    lerMatriz(linhas, colunas, matrizB, 'B');

    somarMatrizes(linhas, colunas, matrizA, matrizB, matrizSoma);

    exibirMatriz(linhas, colunas, matrizA, 'A');
    exibirMatriz(linhas, colunas, matrizB, 'B');
    exibirMatriz(linhas, colunas, matrizSoma, 'Soma');

    return 0;
}