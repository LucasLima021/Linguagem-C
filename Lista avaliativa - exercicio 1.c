#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, result;

    printf("Descubra o produto de 2 n�meros inteiros \n\n");
    printf("Digite 2 n�meros positivos e de forma que o multiplicando (primeiro n�mero da opera��o) seja menor que o multiplicador \n\n");

    printf("Multiplicando: ");
    scanf("%d", &num1);

    printf("Multiplicador: ");
    scanf("%d", &num2);

    if(num1 < num2 & num1 >= 0 & num2 >= 0){
        result = num1 * num2;
        printf("O produto de %d e %d = %d \n", num1, num2, result);
    }
    else{
        printf("As exig�ncias do programa n�o foram atendidas \n");

    }

    system("pause");
}
