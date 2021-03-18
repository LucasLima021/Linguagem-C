#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int idade;
    char nome[30];

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Qual é a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 10){
        printf("%s vc deverá pagar o valor de R$30,00", &nome);
    }
    else if(idade > 10 && idade <= 29){
        printf("%s vc deverá pagar o valor de R$60,00", &nome);
    }
    else if(idade > 29 && idade <= 45){
        printf("%s vc deverá pagar o valor de R$120,00", &nome);
    }
    else if(idade > 45 && idade <= 59){
        printf("%s vc deverá pagar o valor de R$150,00", &nome);
    }
    else if(idade > 59 && idade <= 65){
        printf("%s vc deverá pagar o valor de R$250,00", &nome);
    }
    else{
        printf("%s vc deverá pagar o valor de R$400,00", &nome);
    }

    return 0;
    system("pause");
}
