


#include <stdio.h>



typedef struct {
	char nome[50];
	int idade;
	char sexo;
} Pessoa;
int tam = 10;
Pessoa lista[10];
int quant = 0;

int op;


int cadstrarPessoa()
{
	if(quant < tam)
	{
		Pessoa p;
		scanf("%*c");
		printf("Nome: ");
		fgets(p.nome, 50, stdin);
		printf("Digite idade e sexo m ou f: ");
		scanf("%d %c", &p.idade, &p.sexo);
		lista[quant] = p;
		quant++;
		return 1;
	}
	else
	{
		printf("ERRO: vetor cheio.\n\n");
		return 0;
	}
}

void salvarEmArquivo()
{
	FILE *arq = fopen("lista.txt", "w");
	int i;
	if(arq)
	{
		fprintf(arq, "%d\n", quant);
		for(i = 0; i < quant; i++)
		{
			fprintf(arq, "%s", lista[i].nome);
			fprintf(arq, "%d\n", lista[i].idade);
			fprintf(arq, "%c\n", lista[i].sexo);
		}
		fclose(arq);
	}
	else
		printf("ERRO: nao foi possivel abrir o arquivo.\n\n");
}

void lerDoArquivo()
{
	FILE *arq = fopen("lista.txt", "r");
	int i;
	if(arq)
	{
		fscanf(arq, "%d\n", &quant);
		for(i = 0; i < quant; i++)
		{
			Pessoa p;
			fgets(p.nome, 50, arq);
			fscanf(arq, "%d\n", &p.idade);
			fscanf(arq, "%c\n", &p.sexo);
			lista[i] = p;
		}
		fclose(arq);
	}
	else
		printf("ERRO: nao foi possivel abrir o arquivo.\n\n");
}

int main()
{
	do {
		printf("\n1 - Cadastrar\n2 - Salvar em arquivo texto\n3 - Ler do arquivo texto");
		printf("\n0 - Sair\n");
		scanf("%d", &op);

		switch(op)
		{
		case 0:
			printf("Tchau...\n\n");
			break;
		case 1:
			cadstrarPessoa();
			break;
		
		case 2:
			salvarEmArquivo();
			break;
		case 3:
			lerDoArquivo();
			break;
		case 5:
			// salvarEmArquivo2();
			break;
		case 6:
			//  lerDoArquivo2();
			break;
		default:
			printf("Opcao invalida.\n\n");
		}

	} while(op != 0);

	return 0;

}