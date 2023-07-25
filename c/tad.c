#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

typedef struct no {
  Cliente * valor;
  struct no * prox;
}No;

typedef struct lista {
  No *inicio;
}Lista;

Lista *criar() {
  Lista *l = (Lista *) malloc(sizeof(Lista));
  l -> inicio = NULL;
  return l;
}

int tamanho(Lista * l) {
  if (l == NULL) return -1;
  No * no = l -> inicio;
  int cont = 0;
  while (no != NULL) {
    cont++;
    no = no -> prox;
  }
  return cont;
}


void mostrar(Cliente x) {
    printf("Nome: %s\n", x.nome);
    printf("CPF: %s\n", x.cpf);
    printf("Senha: %s\n", x.senha);
    printf("Saldo atual: R$%2.f\n", x.saldo);
    if(x.divida > 0.0)
        printf("Voce possui uma divida de: R$%2.f\n", x.divida);
    else
        printf("Voce nao possui dividas.\n");

    if(x.invest > 0.0){
        printf("Voce possui R$%2.f investidos\n", x.invest);
        printf("Seu lucro mensal é de: R$2.f\n", x.invest+1.0);
    }
    else
        printf("Voce nao possui valor investido.\n");
}

int listaVazia(Lista * l) {
  if (l == NULL) return 2;
  if (l -> inicio == NULL) return 0;
  else return 1;
}

int listaCheia(Lista * l) {
  if (l == NULL) return 2;
  return 1;
}

int inserirInicio(Lista * l, Cliente * it) {
  if (l == NULL) return 2;
  No * no = (No * ) malloc(sizeof(No));
  no -> valor = it;
  no -> prox = l -> inicio;
  l -> inicio = no;
  return 0;
}

int removerItem(Lista *l, char cpf[], char senha[]){
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    No *aux = l->inicio;
    if(strcmp(cpf, aux->valor->cpf )== 0 && strcmp(senha, aux->valor->senha ) == 0){
        l->inicio = aux->prox;
        free(aux);
        return 0;
    }

    while(((strcmp(cpf, aux->prox->valor->cpf) != 0)&&(strcmp(senha, aux->prox->valor->senha) != 0)) || aux->prox != NULL ){
        aux = aux->prox;
    }

    if(aux->prox == NULL) return 3;

    No *aux2  = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);

    return 0;

}

int buscarCliente(Lista * l, char cpf[], char senha[],struct cliente ** retorno){
    if(l== NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    No *aux = l->inicio;

    if(strcmp(cpf, aux->valor->cpf )== 0 && strcmp(senha, aux->valor->senha ) == 0){
        *retorno = aux->valor;
        return 0;
    }

    while(aux->prox != NULL){
        if((strcmp(cpf, aux->prox->valor->cpf) == 0)&&(strcmp(senha, aux->prox->valor->senha) == 0)){
            *retorno = aux->prox->valor;
            return 0;
        }

    return 3;
    }
}

int saqueConta(struct cliente *x, float valor){
    if(valor < 0.0) return 3;
    if(x->saldo < valor) return 2;
    x->saldo = x->saldo - valor;
    return 0;
}

int depositaConta(struct cliente *x, float valor){
    if(valor < 0.0) return 2;
    x->saldo = x->saldo + valor;
    return 0;
}

int buscarClienteSemSenha(Lista * l, char cpf[],struct cliente**retorno){
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    No *aux = l->inicio;
    while(aux != NULL){
        if((strcmp(cpf, aux->valor->cpf) == 0)){
            *retorno = aux->valor;
            return 0;
        }
        aux = aux->prox;
    }

    return 3;
}

int investConta(struct cliente *x, float valor, float *projecao){
    if(valor < 0.0) return 3;
    if(x->saldo <  valor) return 2;
    x->saldo = x->saldo - valor;
    x->invest = x->invest + valor;
    *projecao = (x->invest * 0.01);

    return 0;
}

int emprestConta(struct cliente *x, float valor, float *juros){
    if((x->divida > 30000.00)) return 3;
    if(valor < 0.0) return 2;
    x->saldo = x->saldo + valor;
    *juros = (valor * 1.35);
    x->divida = x->divida + valor + (*juros);

    return 0;
}
