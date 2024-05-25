//Inversão de uma palavra: Crie um programa que leia uma palavra fornecida pelo
//usuário e, em seguida, inverta a ordem dos caracteres dessa palavra e a exiba.
//Utilize um vetor do tipo char para armazenar a palavra. Obs.: Nesse exercício
//inclua no início do código a diretiva #include <string.h> e pesquise a função
//strlen() para verificar o tamanho da palavra

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    char invertida[100];
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra); // a função 'strlen()' diz o tamanho do vetor

    for (int i = 0; i < tamanho; i++) {
        invertida[i] = palavra[tamanho - i - 1];
    }
    invertida[tamanho] = '\0';

    printf("Palavra invertida: %s\n", invertida);

    return 0;
}