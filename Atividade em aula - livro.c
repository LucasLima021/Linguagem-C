#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int usuario;
    char livro[20];

    printf("Digite o nome do livro: ");
    scanf("%s", &livro);

    printf("Quem é o usuário? \n 0- aluno \n 1- professor \n");
    scanf("%d", &usuario);

    if(usuario){
        printf("Nome do livro: %s \nTipo de usuário: %d \nTotal de dias para devolver o livro: 10 dias", livro, usuario);
    }
    else{
        printf("Nome do livro: %s \n Tipo de usuário: %d \n Total de dias para devolver o livro: 3 dias", livro, usuario);
    }

    return 0;
    system("pause");
}
