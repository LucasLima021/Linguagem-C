#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float consumo, quilometragem;
    char tipo;

    printf("Qual foi o percurso em quilômetros? ");
    scanf("%f", &quilometragem);

    printf("Qual o tipo de carro? \nA- Tipo A \nB- Tipo B \nC- Tipo C \n");
    tipo = getche();

    if(tipo == 'a'|| tipo == 'A'){
        consumo = quilometragem /12;
    }
    else if(tipo == 'B' || tipo == 'b'){
        consumo = quilometragem /9;
    }
    else if(tipo == 'C' || tipo == 'c'){
        consumo = quilometragem /8;
    }

    printf("\n O consumo estimado de combustível é igual a %.2f litros", consumo);

    return 0;
    system("pause");
}
