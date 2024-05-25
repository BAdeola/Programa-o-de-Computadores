#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float dinheiroCaixa, preco, valorTotal;
    int qntdProdutos;

    printf("Qual a quantidade de dinheiro presente no caixa? (R$) ");
    scanf("%f", &dinheiroCaixa);
    printf("Qual a quantidade de produtos a ser comprada? ");
    scanf("%d", &qntdProdutos);
    printf("Qual o preço unitário do produto? ");
    scanf("%f", &preco);

    valorTotal=qntdProdutos*preco;

    if (valorTotal>(dinheiroCaixa*0.8)){
        printf("Seu pagamento será feito em 3x com 10%% de juros, sendo a parcela: 3x de R$%.2f", (valorTotal*1.1)/3);
    } else {
        valorTotal=valorTotal-(valorTotal*0.05);
        printf("O seu pagamento será feito a vista com 5%% de desconto: R$%.2f", valorTotal);
    }

    return 0;
}
