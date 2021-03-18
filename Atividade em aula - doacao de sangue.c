#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char nome[10];
    int peso, idade, aliment, resfriado;
    printf("Qual é o seu nome: ");
    scanf("%s", nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual é o seu peso: ");
    scanf("%d", &peso);

    printf("Você está bem alimentado? [1 - Sim / 0 - Não] ");
    scanf("%d", &aliment);

    printf("Você está com resfriado? [1 - Sim  / 0 - Não] ");
    scanf("%d", &resfriado);

    if ((peso >= 50) && (idade >= 16) && (idade <= 69) && aliment && !resfriado){
        printf ("O voluntário %s está apto a doar!", nome);
    }
    else{
        printf(" O voluntário %s não está apto a doar", nome);
    }

    return 0;
    system("pause");
}
