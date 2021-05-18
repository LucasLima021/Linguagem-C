#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

struct retangulo{
int pse; //ponto superior esquerdo
int pid; //ponto inferior direito
};

void main()
{
    setlocale(LC_ALL, "Portuguese");

    struct retangulo ponto;
    int area = 0, perimetro = 0;
    float compdiagonal = 0;

    printf("Informe o ponto superior esquerdo do ret�ngulo: ");
    scanf("%d", &ponto.pse);

    printf("Informe o ponto inferior direito do ret�ngulo: ");
    scanf("%d", &ponto.pid);

    area = ponto.pse * ponto.pid;
    compdiagonal = sqrt(ponto.pse * ponto.pse + ponto.pid * ponto.pid);
    perimetro = 2 * (ponto.pse + ponto.pid);

    printf("\nA �rea do ret�ngulo corresponde a %d cm2 \n", area);
    printf("O comprimento da diagonal do ret�ngulo corresponde a %.2f cm2 \n", compdiagonal);
    printf("O per�metro do ret�ngulo corresponde a %d cm2 \n\n", perimetro);

    system("pause");
}
