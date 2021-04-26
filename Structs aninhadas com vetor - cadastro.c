#include<stdio.h>
#include<stdlib.h>

//usando struct dentro de struct
struct endereco{
char estado[20];
char cidade[20];
char bairro[40];
int cep;
char rua[40];
int numero;
};

struct data_nascimento{
int dia;
int mes;
int ano;
};

struct cadast_cliente{
char nome[20];
int telefone;

struct endereco Endereco;

struct data_nascimento Data_nascimento;

} Cadast_cliente[2]; //Cadast_clinete[2] é um vetor e uma estrutura do tipo struct cadast_cliente

void main()
{
    int i;

    printf("--------- Cadastro dos clientes ----------\n\n");

    //armazenando os dados de cadastro dentro da struct Cad_cliente
    for(i = 0; i < 2; i++){
        printf("\nNome do cliente.......: ");
        fflush(stdin);
        gets(Cadast_cliente[i].nome);

        printf("\nTelefone........: ");
        scanf("%d", &Cadast_cliente[i].telefone);

        printf("\nEstado.......: ");
        fflush(stdin);
        gets(Cadast_cliente[i].Endereco.estado);

        printf("\nCidade........: ");
        fflush(stdin);
        gets(Cadast_cliente[i].Endereco.cidade);

        printf("\nBairro.........: ");
        fflush(stdin);
        gets(Cadast_cliente[i].Endereco.bairro);

        printf("\nCep..........: ");
        scanf("%d", &Cadast_cliente[i].Endereco.cep);

        printf("\nRua...........: ");
        fflush(stdin);
        gets(Cadast_cliente[i].Endereco.rua);

        printf("\nNumero.........: ");
        scanf("%d", &Cadast_cliente[i].Endereco.numero);

        printf("\nDia de nascimento.........: ");
        scanf("%d", &Cadast_cliente[i].Data_nascimento.dia);

        printf("\nMes de nascimento..........: ");
        scanf("%d", &Cadast_cliente[i].Data_nascimento.mes);

        printf("\nAno de nascimento.........: ");
        scanf("%d", &Cadast_cliente[i].Data_nascimento.ano);

    }

    //percorrer o vetor de struct Cad_cliente
    for(i = 0; i < 2; i++){
        printf("\n Nome...........: %s", Cadast_cliente[i].nome);
        printf("\n Telefone...........: %d", Cadast_cliente[i].telefone);
        printf("\n Estado...........: %s", Cadast_cliente[i].Endereco.estado);
        printf("\n Cidade...........: %s", Cadast_cliente[i].Endereco.cidade);
        printf("\n Bairro...........: %s", Cadast_cliente[i].Endereco.bairro);
        printf("\n Cep...........: %d", Cadast_cliente[i].Endereco.cep);
        printf("\n Rua...........: %s", Cadast_cliente[i].Endereco.rua);
        printf("\n Numero...........: %d", Cadast_cliente[i].Endereco.rua);
        printf("\n Dia de nascimento...........: %d", Cadast_cliente[i].Data_nascimento.dia);
        printf("\n Mes de nascimento...........: %d", Cadast_cliente[i].Data_nascimento.mes);
        printf("\n Ano de nascimento...........: %d \n", Cadast_cliente[i].Data_nascimento.ano);
    }

    system("pause");
}
