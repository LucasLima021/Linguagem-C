#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont, idade[20], sexo[20];
    char nome[20][10]; //nome � um vetor de 20 posi��es do tipo char e que suporta 10 caracteres

    for(cont = 0; cont < 20; cont++){
        printf("\n[%d]- Digite o seu nome: ", cont + 1);
        scanf("%s", &nome[cont]);

        printf("Qual � a sua idade? ");
        scanf("%d", &idade[cont]);

        printf("Qual � o seu sexo? [0] Masculino [1] Feminino ");
        scanf("%d", &sexo[cont]);

    }

    system("cls");

    for(cont = 0; cont < 20; cont++){

        if(sexo[cont] == 0 && idade[cont] > 21)
        printf("%s \n", nome[cont]);

        }

    system("pause");
}
