#include <stdio.h>
void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}
int main()
{
	struct FOLHA
	{
		char NOME[50];
		struct END
		{
			char LOGRADOURO[50];
			int NUMERO;
			char BAIRRO[30];
			char COMPLEMENTO[10];

		} ENDERECO;
		long int NUMERO_SEG;
		float SALARIO;

	};
	struct FOLHA REGISTRO;
	puts("--- Dados do Funcionario ---");
	puts("Digite seu nome:");
	fgets(REGISTRO.NOME,sizeof(REGISTRO.NOME),stdin);
	puts("Numero da residencia:");
	scanf("%d",&REGISTRO.ENDERECO.NUMERO);
	fgetc(stdin);//usamos o fgetc para caputar o lixo do scanf
	puts("Endereço:");
	fgets(REGISTRO.ENDERECO.LOGRADOURO,sizeof(REGISTRO.ENDERECO.LOGRADOURO),stdin);
	puts("Bairro:");
	fgets(REGISTRO.ENDERECO.BAIRRO,sizeof(REGISTRO.ENDERECO.BAIRRO),stdin);
	puts("Complemento:");
	fgets(REGISTRO.ENDERECO.COMPLEMENTO,sizeof(REGISTRO.ENDERECO.COMPLEMENTO),stdin);
	puts("Numero do seguro de vida");
	scanf("%d",&REGISTRO.NUMERO_SEG);
	fgetc(stdin);
	puts("Salario:");
	scanf("%g",&REGISTRO.SALARIO);
	fgetc(stdin);
	printf("--- Dados do usuário ---\nNome:%sEndereço:%sNumero:%d\nBairro:%sComplemento:%s\nNº seguro de vida:%d\nSalario:%g"
	,REGISTRO.NOME,REGISTRO.ENDERECO.LOGRADOURO,REGISTRO.ENDERECO.NUMERO,REGISTRO.ENDERECO.BAIRRO,
	REGISTRO.ENDERECO.COMPLEMENTO,REGISTRO.NUMERO_SEG,REGISTRO.SALARIO);

}