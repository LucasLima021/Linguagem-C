#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, codigo;
    float consumo, custo, consumotot, media;

    numero = 1;

    while(numero != 0){
        printf("\nInforme o número do consumidor: ");
        scanf("%d", &numero);

        if(numero == 0)
            break;

        printf("Qual o consumo em KW/h durante o mês? ");
        scanf("%f", &consumo);

        printf("Digite o código do consumidor \n[1] Residencial \n[2] Comercial \n[3] Industrial \n");
        scanf("%d", &codigo);

   switch(codigo){
case 1:
    custo = consumo * 0.3;
    consumotot += consumo;
    printf("Consumidor %d - Custo total: %.2f reais \n", numero, custo);
    break;
case 2:
    custo = consumo * 0.5;
    consumotot += consumo;
    printf("Consumidor %d - Custo total: %.2f reais \n", numero, custo);

    media = consumotot / 2;
    break;
case 3:
    custo = consumo * 0.7;
    consumotot += consumo;
    printf("Consumidor %d - Custo total: %.2f reais \n", numero, custo);
    break;

    }
        }

        printf("\n\nO total de consumo para os três tipos de consumidores é %.2f KWh p/ mês\n", consumotot);
        printf("\nA média de consumo de residencial e comercial é de %.2f KWh p/ mês \n\n", media);

    system("pause");
}
