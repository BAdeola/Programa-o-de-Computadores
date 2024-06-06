#include <stdio.h>

int main(){
    int matriz[4][3];

    int maior[4];
    
    int i, j;

    printf("Digite os elementos da matriz:\n");
    
    for (i=0; i<4; i++) {
        for (j=0; j<3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<4; i++){
        maior[i]=matriz[i][0];
        for (j=0; j<3; j++){
            if (maior[i]<matriz[i][j]){
                maior[i]=matriz[i][j];
            }   
        }
    }

    printf("Os maiores elementos de cada linha da matriz é:\n");
    for(i=0; i<4; i++){
        printf("Linha %d: %d\n", i, maior[i]);
    }

    return 0;
}