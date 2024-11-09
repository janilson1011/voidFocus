#include <stdio.h>

typedef struct data dt;

struct data
{
	char nome[30];
	float med;
	char sexo;
};

int main(void)
{
	dt pessoa;

	printf("nome:\n");
	scanf("%s", pessoa.nome);
	printf("media:\n");
	scanf("%f", &pessoa.med);
	printf("sexo:\n");
	scanf(" %c", &pessoa.sexo);

	printf("nome: %s\n", pessoa.nome);
	printf("media: %.2f\n", pessoa.med);
	printf("sexo: %c\n", pessoa.sexo);
	
	return 0;
}