#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float salario, emprest;

    printf("Qual é o seu salário bruto: ");
    scanf("%f", &salario);

    printf("Qual é o valor do empréstimo que vc deseja fazer? ");
    scanf("%f", &emprest);

    if(emprest < salario * 0.30){
        printf("O empréstimo não pode ser concedido");
    }
    else{
        printf("O empréstimo pode ser concedido!");
    }

    return 0;
    system("pause");
}
