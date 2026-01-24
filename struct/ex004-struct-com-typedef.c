#include <stdio.h>
typedef struct tipo_endereco
{
    char rua[30];
    int numero;
    char bairro[30];
    char cidade[30];
    char sigla_estado[3];
    long int cep;
} dt_endereco;
struct tipo_cadastro
{
    char nome[30];
    long int telefone;
    dt_endereco endereco;
};
typedef struct tipo_cadastro cadastro;
int main()
{
    cadastro dados;
   puts("digite seu nome completo");
   fgets(dados.nome,sizeof(dados.nome),stdin);
   puts("Telefone:");
   scanf("%li",&dados.telefone);
   fgetc(stdin);
   puts("--- dados residenciais ---");
   puts("Rua:");
   fgets(dados.endereco.rua,sizeof(dados.endereco.rua),stdin);
   puts("Numero:");
   scanf("%d",&dados.endereco.numero);
   fgetc(stdin);
   puts("Bairro:");
   fgets(dados.endereco.bairro,sizeof(dados.endereco.bairro),stdin);
   puts("Cidade:");
   fgets(dados.endereco.cidade,sizeof(dados.endereco.cidade),stdin);
   puts("Sigla do estado:");
   fgets(dados.endereco.sigla_estado,sizeof(dados.endereco.sigla_estado),stdin);
   puts("Cep:");
   scanf("%li",&dados.endereco.cep);
   printf("--- dados Pessoais ---\nNome completo:%sTelefone:%li\n --- dados residenciais ---\nRua:%sNumero:%d\nBairro:%sCidade:%sEstado:%s\nCep:%li"
   ,dados.nome,dados.telefone,dados.endereco.rua,dados.endereco.numero
   ,dados.endereco.bairro,dados.endereco.cidade,dados.endereco.sigla_estado,dados.endereco.cep);
}