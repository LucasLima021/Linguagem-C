#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char nome[10];
    int peso, idade, aliment, resfriado;
    printf("Qual � o seu nome: ");
    scanf("%s", nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual � o seu peso: ");
    scanf("%d", &peso);

    printf("Voc� est� bem alimentado? [1 - Sim / 0 - N�o] ");
    scanf("%d", &aliment);

    printf("Voc� est� com resfriado? [1 - Sim  / 0 - N�o] ");
    scanf("%d", &resfriado);

    if ((peso >= 50) && (idade >= 16) && (idade <= 69) && aliment && !resfriado){
        printf ("O volunt�rio %s est� apto a doar!", nome);
    }
    else{
        printf(" O volunt�rio %s n�o est� apto a doar", nome);
    }

    return 0;
    system("pause");
}
