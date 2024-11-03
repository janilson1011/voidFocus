#include<stdio.h>

int soma(int n, int n2){
    return n + n2;
}

int leitura(){
    int n;
    scanf("%d", &n); 
    return n;
}

char leituraNome(char vetNome[30]){
     scanf("%s", vetNome);
};

typedef struct dadosDoAluno dados;

struct dadosDoAluno{
        char nome[30];
        int  nota;
        int  nota2;
};

int main(void){
    dados aluno;
 
    aluno.nota  = leitura();
    aluno.nota2 = leitura();
    leituraNome(aluno.nome);
    

    printf("--------------------------------\n");
    printf("soma = %d\n", soma(aluno.nota,aluno.nota2));
    printf("nome = %s\n", aluno.nome);
    printf("--------------------------------\n");

    return 0;
} 

