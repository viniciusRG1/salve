#include <stdio.h>
#include <string.h>

struct funcionario{
    long int matricula;
    char nome[21];
    int idade;
    char cargo;
    float salario;

};

void cadastro(struct funcionario *funcionario){
    int n_cadastro = 0;
    int FIM = 1;
    while(n_cadastro != 10){

        scanf("%u", &funcionario[n_cadastro].matricula);
        scanf("%s", &funcionario[n_cadastro].nome);
        scanf("%d", &funcionario[n_cadastro].idade);
        scanf("%c", &funcionario[n_cadastro].cargo);
        scanf("%f", &funcionario[n_cadastro].salario);

        n_cadastro++;
        printf("digite '0' se vc quer finalizar \n caso queira continuar, digite outro numero");
        scanf("d", &FIM);
        if(FIM == 0){
            n_cadastro = 10;
        }
    }

}
void consulta(struct funcionario *funcionario){
    char escolha[21];
    int N_do_funcionario = 0;
    char FIM[4];
    strcpy(FIM, "FIM");
    while(escolha != FIM){
        scanf("%s", &escolha);
        for(N_do_funcionario = 0; N_do_funcionario < 11;N_do_funcionario++){

             for(int i=0; funcionario[N_do_funcionario].nome[i] != '\0' && escolha[i] != '\0'; i++){
                if(N_do_funcionario == 10){
                    printf("nao existe esse trabalhador \n");
                }
                else if(funcionario[N_do_funcionario].nome[i] < escolha[i]){
                    N_do_funcionario++;
                    i = 0;
                }
                else if(funcionario[N_do_funcionario].nome[i] > escolha[i]){
                    N_do_funcionario++;
                    i = 0;
                }


                }
   }
    printf("matricula: %ld\n", funcionario[N_do_funcionario].matricula);
    printf("nome: %s\n", funcionario[N_do_funcionario].nome);
    printf("idade: %d\n", funcionario[N_do_funcionario].idade);
    printf("cargo: %c\n", funcionario[N_do_funcionario].cargo);
    printf("salario: %f\n", funcionario[N_do_funcionario].salario);
    printf("escreva 'FIM' caso queira finalizar o programa, caso o contrario, aperte outra tecla");
    scanf("%s", &escolha);

       }


    }


int main (){


struct funcionario funcionario[10];

cadastro(funcionario);
consulta(funcionario);


return 0;
}
