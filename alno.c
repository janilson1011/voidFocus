#include<stdio.h>

typedef struct dadosAluno info;

struct dadosAluno{
       char nome[30];
       char turma;
       float media;
};

void leituraAlfa(char alfa[]){
     scanf("%s", alfa);
}

float leituraNum(void){
      float med;
      scanf("%f", &med);
      return med;
}

char leitura(void){
      char tur;
      scanf(" %c", &tur);
      return tur;
}
 
int main(void){
    info aluno;
   
    leituraAlfa(aluno.nome);
    aluno.turma = leitura();
    aluno.media = leituraNum(); 

    printf("* nome do aluno   => %s\n", aluno.nome);
    printf("  turma do aluno  => %c\n", aluno.turma);
    printf("  media do aluno  => %.2f *\n", aluno.media);

    return 0;
}
