#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont;
    float salario[10], imposto[10];
    char nome[10][15]; //nome é um vetor de 10 posições do tipo char e que suporta 15 caracteres

    for(cont = 0; cont < 10; cont++){

        printf("\n[%d]- Digite o seu nome: ", cont + 1);
        scanf("%s", &nome[cont]);

        printf("Digite o seu salário bruto: ");
        scanf("%f", &salario[cont]);
    }

    system("cls");

    for(cont = 0; cont < 10; cont++){

        if(salario[cont] < 1300){
           printf("%s: Você está isento do imposto de renda \n", nome[cont]);
            }

        else if(salario[cont] >= 1300 && salario[cont] < 2300){
                imposto[cont] = salario[cont] * 0.10;
                printf("%s: Imposto de %.2f reais, equivalente a 10 porcento de seu salário \n", nome[cont], imposto[cont]);
            }

        else{
            imposto[cont] = salario[cont] * 0.15;
            printf("%s: Imposto de %.2f reais, equivalente a 15 porcento de seu salário \n", nome[cont], imposto[cont]);
            }
}
    system("pause");
}

