#include <stdio.h>

int main(){
    int matriz[2][3], trans[3][2];
    int i, j;

    printf("Digite os elementos da matriz %c:\n");
    
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            trans[i][j]=matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");

    for (i=0; i<3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}