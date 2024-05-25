#include <stdio.h>

int main(){
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int i, j, matriz[linhas][colunas], par=0, impar=0;

    printf("Digite os elementos da matriz:\n");
    
    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            if (matriz[i][j]%2==0){
                par+=1;
            } else{ 
                impar+=1;
            }
        }
    }

    printf("A quantidade de números par na matriz é: %d\n", par);
    printf("A quantidade de números imares na matriz é: %d\n", impar);

    return 0;
}