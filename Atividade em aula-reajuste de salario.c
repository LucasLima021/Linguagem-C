#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");

    int salario, cargo;
    float reaju;

    printf ("Qual � o c�digo do seu cargo? \n 1 - Auxiliar de escrit�rio \n 2 - Secret�rio");
    printf  ("\n 3 - Cozinheiro \n 4 - Entregador \n");
    scanf ("%d", &cargo);

    printf ("Digite o seu sal�rio: ");
    scanf ("%d", &salario);

    switch(cargo){
case 1:
    reaju = (salario * 0.07) + salario;
    break;
case 2:
    reaju = (salario * 0.09) + salario;
    break;
case 3:
    reaju = (salario * 0.05) + salario;
    break;
case 4:
    reaju = (salario * 0.12) + salario;
    break;
    }

    printf ("Seu novo sal�rio seguindo o reajuste � %.2f \n", reaju);

    system("pause");
    return 0;
}
