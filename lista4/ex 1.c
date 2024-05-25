#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, qntd;
    float preco, total, soma=0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o preço unitário do %d° produto: (R$)", i);
        scanf("%f", &preco);
        printf("Digite a quantidade comprada do produto: ");
        scanf("%d", &qntd);
        
        total=preco*qntd;

        soma+=total;
    }

    printf("O valor total gasto nessa compra será de R$%.2f", soma);

    return 0;
}