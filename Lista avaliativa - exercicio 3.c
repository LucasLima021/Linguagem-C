#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int time, cidade;
    float salario;
    int flu =0, fla =0, vas =0, bot =0; //vari�veis para receber e incrementar a torcida de cada time
    float soma_salarial, media_salarial; //vari�vel para receber a soma dos salarios da torcida do botafogo; vari�vel para receber a m�dia salarial
    int soma =0, niteroflu =0; //vari�vel para receber e incrementar quem torce para outros times e mora no RJ; vari�vel para receber e incrementar quem torce para o flu e � de Niter�i

    time = 1; //dando um valor diferente de 0 para a vari�vel time entrar no while

    while(time != 0){ //enquanto a vari�vel time n�o receber 0 fa�a:

        printf("Qual � o seu time do cora��o? \n[1] Fluminense \n[2] Flamengo \n[3] Vasco \n[4] Botafogo \n[5] Outros \n");
        scanf("%d", &time);

        if(time == 0) // se receber 0 finaliza a execu��o do programa
            break;

        printf("Onde vc mora? \n[1] RJ \n[2] Niteroi \n[3] Outros \n");
        scanf("%d", &cidade);

        if(time == 5 && cidade == 1)
            soma++;

        if(time == 1 && cidade == 2)
            niteroflu++;

        printf("Digite seu sal�rio: ");
        scanf("%f", &salario);

       switch(time){
    case 1:
        flu++;
        break;
    case 2:
        fla++;
        break;
    case 3:
        vas++;
        break;
    case 4:
        soma_salarial += salario;
        bot++;
        media_salarial = soma_salarial / bot;
        break;
    case 5:
        break;
    default:
        printf("\nEntrada inv�lida: Digite um n�mero correspondente a pergunta feita sobre o seu time \n\n");
        break;

        }

    }

    system("cls"); //limpar a tela

    printf(" N�mero de torcedores por clube: \n Fluminense: %d \n Flamengo: %d \n Vasco: %d \n Botafogo: %d \n", flu, fla, vas, bot);
    printf("\n A m�dia salarial dos torcedores do Botafogo � de %.2f reais \n", media_salarial);
    printf("\n O n�mero de pessoas moradoras do Rio de Janeiro torcedoras de outros clubes � %d \n", soma);
    printf("\n O n�mero de pessoas de Niter�i torcedoras do Fluz�o � %d \n\n", niteroflu);

    system("pause");
}
