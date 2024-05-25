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

int somarMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    int i, j, soma=0;
    for (i=0; i<linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma+=matriz[i][j];
        }
    }

    return soma;
}

int main(){
    int linhasA, colunasA, linhasB, colunasB, somaA, somaB;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &colunasA);

    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colunasB);

    int matrizA[linhasA][colunasA];
    int matrizB[linhasB][colunasB];

    lerMatriz(linhasA, colunasA, matrizA, 'A');
    exibirMatriz(linhasA, colunasA, matrizA, 'A');

    lerMatriz(linhasB, colunasB, matrizB, 'B');
    exibirMatriz(linhasB, colunasB, matrizB, 'B');

    somaA=somarMatriz(linhasA, colunasA, matrizA);
    somaB=somarMatriz(linhasB, colunasB, matrizB);

    int resultado=somaA*somaB;

    printf("A soma da matriz A é: %d\n", somaA);
    printf("A soma da matriz B é: %d\n", somaB);
    printf("O resultado da multiplicação da soma das matrizes é: %d", resultado);

    return 0;
}