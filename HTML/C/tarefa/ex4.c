#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numero_argu = 2;


struct aluno{
    long int matricula;
    char nome [21];
    float nota;
    char conceito;

};

void captura_leitura(int numero_aluno, struct aluno *alunos){
        int escolha = 0;

        while(escolha == 0){
            printf("escreva 1 para ler as informações \n escreva 2 para escrever as informcoes \n");
            scanf("%d", &*escolha);
            if(escolha != 1 && escolha != 2){
                escolha = 0;
            }
        }

        if(escolha == 1){
            printf("nome do aluno %s \n", alunos[numero_aluno].nome);
            printf("matricula do aluno %s \n", alunos[numero_aluno].matricula);
            printf("nota do aluno %s \n", alunos[numero_aluno].nota);
            printf("conceito do aluno %s \n", alunos[numero_aluno].conceito);

        }

        for(int posicao = 0; posicao < numero_aluno; posicao++){
            printf("escreva a matricula do aluno \n");
            scanf("%u", &alunos[numero_aluno].matricula);
            printf("escreva o nome do aluno \n");
            scanf("%s", &alunos[numero_aluno].nome);
            printf("escreva a nota do aluno \n");
            scanf("%f", &alunos[numero_aluno].nota);
            printf("escreva o conceito do aluno \n");
            scanf("%c", &alunos[numero_aluno].conceito);

        }
}
void registro(int numero_aluno ,struct aluno *alunos, FILE *arquivo){

    for(int posicao = 0; posicao < numero_aluno; posicao++){

        fprintf(arquivo, "nome do aluno %s \n", alunos[numero_aluno].nome);
        fprintf(arquivo, "matricula do aluno %s \n", alunos[numero_aluno].matricula);
        fprintf(arquivo, "nota do aluno %s \n", alunos[numero_aluno].nota);
        fprintf(arquivo, "conceito do aluno %s \n", alunos[numero_aluno].conceito);
        printf("O arquivo foi criado com sucesso!\n");

    }

}
int main(int argc, char *argv[]) // primeiro coloque o nome do arquivo, depois o número de aluno;
{
if(argc > numero_argu){
        return 1;
    }else if(argc < numero_argu){
        return -1;
    }
    int numero_alunos = atoi(argv[2]);
    FILE *arquivo;

    arquivo = fopen(argv[1], "a");

    struct aluno alunos[numero_alunos];

    captura_leitura(numero_alunos, alunos);

    fclose(arquivo);



return(0);
}
