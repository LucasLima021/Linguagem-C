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
        printf("\nInforme o n�mero do consumidor: ");
        scanf("%d", &numero);

        if(numero == 0)
            break;

        printf("Qual o consumo em KW/h durante o m�s? ");
        scanf("%f", &consumo);

        printf("Digite o c�digo do consumidor \n[1] Residencial \n[2] Comercial \n[3] Industrial \n");
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

        printf("\n\nO total de consumo para os tr�s tipos de consumidores � %.2f KWh p/ m�s\n", consumotot);
        printf("\nA m�dia de consumo de residencial e comercial � de %.2f KWh p/ m�s \n\n", media);

    system("pause");
}
