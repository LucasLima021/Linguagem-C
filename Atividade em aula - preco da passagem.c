#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int cod, idaevolta;

    printf("Qual é o código de destino de sua viagem? \n");
    printf(" 1- Região Norte \n 2- Nordeste \n 3- Centro-Oeste \n 4- Sul \n");
    scanf("%d", &cod);

    printf("O destino da viagem inclui ida ou ida e volta? \n 1- Ida \n 2- Ida e volta: \n");
    scanf("%d", &idaevolta);

    if (cod == 1 && idaevolta == 1){
        printf("O preço da passagem é R$500,00");
    }
    else if(cod == 1 && idaevolta == 2){
        printf("O preço da passagem é R$900,00");
    }
    else if(cod == 2 && idaevolta == 1){
        printf("O preço da passagem é R$350,00");
    }
    else if(cod == 2 && idaevolta == 2){
        printf("O preço da passagem é R$650,00");
    }
    else if(cod == 3 && idaevolta == 1){
        printf("O preço da passagem é R$350,00");
    }
    else if(cod == 3 && idaevolta == 2){
        printf("O preço da passagem é R$600,00");
    }
    else if(cod == 4 && idaevolta == 1){
        printf("O preço da passagem é R$300,00");
    }
    else if(cod == 4 && idaevolta == 2){
        printf("O preço da passagem é R$550,00");
    }
    else{
        printf("Opção inválida");
    }

    return 0;
    system("pause");
}
