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
    int nota, nota2;
    char apelido[30];
 
    nota  = leitura();
    nota2 = leitura();
    leituraNome(apelido);
    

    printf("--------------------------------\n");
    printf("soma = %d\n", soma(nota, nota2));
    printf("nome = %s\n", apelido);
    printf("--------------------------------\n");

    return 0;
} 

