#include<stdio.h>

int soma(int n, int n2){
    return n + n2;
}

int leitura(){
    int n;
    scanf("%d", &n); 
    return n;
}

typedef struct dadosDoAluno dados;

struct dadosDoAluno{
        char nome[30];
        int  nota;
        int  nota2;
};

int main(void){
    int nota, nota2;
    
    nota  = leitura();
    nota2 = leitura();

    printf("soma = %d\n", soma(nota, nota2));

    return 0;
} 

