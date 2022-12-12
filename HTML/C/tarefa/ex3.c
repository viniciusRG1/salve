
#include <stdio.h>
#include <stdlib.h>

int numero_argu = 2;

int ins_ordenada(int *numero, int espacos){
    int local = 0;
    int numeros = 0;
    int alocado = 1;
    printf("escreva o numero\n");
    scanf("%d", &numero[0]);
    for(int alocamento = 1; alocamento < espacos; alocamento++){
        scanf("%d", &numeros);
        while(numeros > numero[local]){
            local++;
        }if(numeros == numero[local] || numeros < numero[local]){
             for(int realocamento = 1; realocamento + local < espacos; realocamento++){

                if(numero[local + realocamento + 1] == NULL){
                    numero[local + realocamento + 1] = numero[local + realocamento];
                    numero[local + realocamento] = numeros;

                        realocamento = realocamento - 1;

                    }else if( numero[local + realocamento + 1] != NULL){
                        continue;
                    }else if(numeros == numero[local + realocamento - 1] || numeros < numero[local + realocamento - 1]){
                        numero[local + realocamento] == numeros;

                    }
                }

            }

        }

    }






int main(int argc, char *argv[]){
    if(argc > numero_argu){
        return 1;
    }else if(argc < numero_argu){
        return -1;
    }

    int espacos;
    espacos = atoi(argv[1]);
    int alocacao[espacos];
    for(int nullzado = 0; nullzado < espacos; nullzado++){
        alocacao[nullzado] = 0;
    }
    int numero = 0;
    int FIM = 1;
    while(FIM != 0){
        printf(" caso queria colocar algum numero digite 1 \n se queiser ver a lista digite 2 \n caso nao queire digite 0\n");
        scanf("%d", &FIM);
        if(FIM == 1){

            ins_ordenada(alocacao, espacos);

        }
    }
    for(int print = 0; print < espacos; print++){
        printf("%d", alocacao[print]);
    }
return 0;
}
