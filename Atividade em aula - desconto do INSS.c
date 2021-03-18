#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if(salario <= 600){
        printf("Você está isento do pagamento");
    }
    else if(salario > 600 && salario <= 1200){
            printf("Seu desconto é de %.2f \n", salario * 0.20);
            printf("Total a pagar é %.2f", salario - salario * 0.20);
    }
    else if(salario > 1200 && salario <= 2000){
        printf("Seu desconto é de %.2f \n", salario * 0.25);
        printf("Total a pagar é %.2f", salario - salario * 0.25);
    }
    else{
        printf("Seu desconto é de %.2f \n", salario * 0.30);
        printf("Total a pagar é %.2f", salario - salario * 0.30);
    }

    return 0;
    system("pause");
}
