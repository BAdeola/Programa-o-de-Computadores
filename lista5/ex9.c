//Contagem de vogais e consoantes: Escreva um programa que solicite ao usuário
//que insira uma frase (uma sequência de caracteres) e, em seguida, conte e
//exiba a quantidade de letras presentes na frase. Utilize um vetor do tipo char
//para armazenar a frase. Obs.: Nesse exercício inclua no início do código a
//diretiva #include <ctype.h> e pesquise as funções isalpha (verifica se o carácter
//é uma letra) e a função tolower() converte uma letra para minúsculo.

#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[100];
    int vogais=0, consoantes=0, i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            if (tolower(frase[i])=='a' || tolower(frase[i])=='e'|| tolower(frase[i])=='i' || tolower(frase[i])=='o' || tolower(frase[i])=='u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("Quantidade de vogais na frase: %d\n", vogais);
    printf("Quantidade de consoantes na frase: %d\n", consoantes);
    
    return 0;
}