#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float salario, emprest;

    printf("Qual � o seu sal�rio bruto: ");
    scanf("%f", &salario);

    printf("Qual � o valor do empr�stimo que vc deseja fazer? ");
    scanf("%f", &emprest);

    if(emprest < salario * 0.30){
        printf("O empr�stimo n�o pode ser concedido");
    }
    else{
        printf("O empr�stimo pode ser concedido!");
    }

    return 0;
    system("pause");
}
