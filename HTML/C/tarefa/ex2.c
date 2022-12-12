#include <stdio.h>
#include <string.h>

int fatoriar(int numero){
    int fatorial_final = 1;
    for(numero = numero; numero > 0; numero--){
        fatorial_final = fatorial_final * numero;
    }
    return fatorial_final;
}

int conta(int P, int M, int P_M){
    float C = 0;
    C = M/(P*M);
    printf("a combinacao e %f", C);
}

int main(){
    int M = 0;
    int P = 0;
    int p_m = 0;
    printf("escolha o numero M\n");
    scanf("%d", &M);
    printf("escolha o numero P\n");
    scanf("%d", &P);

    p_m = M - P;

    M = fatoriar(M);
    P = fatoriar(P);
    p_m = fatoriar(p_m);

    conta(P, M, p_m);
}
