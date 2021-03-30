#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int pedido, cont; //cont é a variável de controle que vai varrer 2 vetores
    float valor[50], quant[50], resp =0; //como valor e quant são vetores que se encerram quando o usuário digita 0 eu determinei que ambos terão 50 posições
    char data[10];                                     //resp vai receber e somar cada valor associado a sua quantidade, determinando o valor total da compra

    pedido = 1; //dando um valor diferente de 0 para a variável pedido entrar no while

    while(pedido != 0){
        printf("Digite o número do pedido: ");
        scanf("%d", &pedido);

    if(pedido == 0)
    break;

    printf("Qual é a data do pedido: ");
    scanf("%s", &data);

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &valor[cont]);

    printf("Qual é a quantidade desse produto: ");
    scanf("%f", &quant[cont]);

    resp += valor[cont] * quant[cont];

}
    system("cls");

    printf("O valor total da compra é de %.2f reais \n", resp);

    system("pause");
}
