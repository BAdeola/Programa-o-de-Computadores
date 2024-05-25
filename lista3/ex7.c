#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media, nota1, nota2;
    int aulas, faltas;

    printf("Digite as notas do aluno, de 0 a 10.\n");
    scanf("%f %f", &nota1, &nota2);
    printf("Digite a quantidade de aulas e faltas do aluno, respectivamente.\n");
    scanf("%d %d", &aulas, &faltas);

    media=(nota1+nota2)/2;
    faltas=(faltas/aulas)*100;

    if (media>7 && faltas<=25) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}