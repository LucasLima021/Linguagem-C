#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int pedido, cont; //cont � a vari�vel de controle que vai varrer 2 vetores
    float valor[50], quant[50], resp =0; //como valor e quant s�o vetores que se encerram quando o usu�rio digita 0 eu determinei que ambos ter�o 50 posi��es
    char data[10];                                     //resp vai receber e somar cada valor associado a sua quantidade, determinando o valor total da compra

    pedido = 1; //dando um valor diferente de 0 para a vari�vel pedido entrar no while

    while(pedido != 0){
        printf("Digite o n�mero do pedido: ");
        scanf("%d", &pedido);

    if(pedido == 0)
    break;

    printf("Qual � a data do pedido: ");
    scanf("%s", &data);

    printf("Digite o pre�o unit�rio do produto: ");
    scanf("%f", &valor[cont]);

    printf("Qual � a quantidade desse produto: ");
    scanf("%f", &quant[cont]);

    resp += valor[cont] * quant[cont];

}
    system("cls");

    printf("O valor total da compra � de %.2f reais \n", resp);

    system("pause");
}
