#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tad.h"


int main()
{
    int op, op1,retorno;
    Lista *l = criar();
    Cliente * a;
    char cpfTeste[12];
    char senhaTeste[30];
    Cliente * atual, * destino;
    float val, proj, jur;

    do{
        do{
            printf("\n --- BANCO PALAFIN--- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar uma conta\n");
            printf(" 2. Entrar na sua conta\n");
            printf(" 3. Cancelar sua Conta\n");
            printf(" 4. Sair\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 4)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 4));

        switch(op)
        {
            case 1:
                a = (Cliente *) malloc(sizeof(Cliente));
                printf("\nDigite o nome: ");
                scanf("%s", a->nome);
                fflush(stdin);
                printf("\nDigite o CPF: ");
                scanf("%s", a->cpf);
                fflush(stdin);
                printf("\nDigite a senha: ");
                scanf("%s", a->senha);
                fflush(stdin);
                a->saldo = 0.0;
                a->invest = 0.0;
                a->divida = 0.0;

                retorno = inserirInicio(l,a);

                system("cls");
                if(retorno == 2)
                    printf("\n Banco Inexistente.\n");
                printf("\nConta criada com sucesso!!\n");

                break;

            case 2:
                fflush(stdin);
                printf("Insira seu CPF: ");
                gets(cpfTeste);
                fflush(stdin);
                printf("Digite sua Senha: ");
                gets(senhaTeste);
                fflush(stdin);
                retorno = buscarCliente(l, cpfTeste, senhaTeste, &atual);

                system("cls");

                if(retorno == 3){
                    printf("\nCPF e/ou senha incorretos\n");
                    break;
                }

                if(retorno == 2){
                    printf("\nBanco inexistente\n");
                    break;
                }

                if(retorno == 1){
                    printf("\nBanco vazio\n");
                    break;
                }
            do{
                do{
                    printf("\n-- BEM VINDO A SUA CONTA --\n\n");
                    printf("1. Realizar um saque\n");
                    printf("2. Realizar uma transferencia\n");
                    printf("3. Realizar um deposito\n");
                    printf("4. Ver seu saldo\n");
                    printf("5. Fazer um investimento\n");
                    printf("6. Fazer um emprestimo\n");
                    printf("7. Sair da conta\n");
                    printf(" Opcao: ");
                    scanf("%d", &op1);
                    printf("\n");
                    if((op1 < 1) || (op1 > 7)) {

                    printf("\n\n Opcao Invalida! Tente novamente...");
                    }
                }while((op1 < 1) || (op1 > 7));

                switch(op1){
            case 1:
                printf("Digite a quantia a ser retirada: ");
                scanf("%f", &val);
                retorno = saqueConta(atual, val);
                system("cls");
                if(retorno == 2){
                    printf("\nSaldo insuficiente.\n");
                    printf("\nLembre-se que pode fazer um emprestimo!!\n");
                }
                else if(retorno == 3){
                    printf("\nInsira um valor valido.\n");
                }
                else{
                    printf("\nSaque realizado com sucesso!!\n");
                    printf("\nSeu saldo atual e: R$%.2f\n", atual->saldo);
                }
                break;

            case 2:
                fflush(stdin);
                printf("Digite o CPF do destinatario: ");
                scanf("%s", cpfTeste);
                fflush(stdin);

                retorno = buscarClienteSemSenha(l, cpfTeste, &destino);
                system("cls");

                if(retorno == 2){
                    printf("\nBanco inexistente\n");
                    break;
                }
                if(retorno == 3){
                    printf("\nCPF incorreto ou inexistente\n");
                    break;
                }
                if(retorno == 1){
                    printf("\nSó existe uma conta neste banco\n");
                    break;
                }

                printf("Digite a quantia a ser transferida: ");
                scanf("%f", &val);
                fflush(stdin);

                if(val < 0.0){
                    printf("\nValor inválido.\n");
                    break;
                }
                retorno = saqueConta(atual, val);
                depositaConta(destino, val);

                if(retorno == 3){
                    printf("\nDigite um valor valido.\n");
                    break;
                }

                if(retorno == 2){
                    printf("\nSaldo insuficiente.\n");
                    break;
                }

                printf("\nTransferencia concluida com sucesso!!\n");
                printf("\nSeu saldo atual e: R$%.2f\n",atual->saldo);

                break;

            case 3:
                printf("Digite a quantia a ser depositada: ");
                scanf("%f", &val);
                system("cls");
                if(depositaConta(atual, val) == 2){
                    printf("\nInsira um valor valido\n");
                }
                else{
                    printf("\nDeposito realizado com sucesso!!\n");
                    printf("\nSeu saldo atual e: R$%.2f\n", atual->saldo);
                }
                break;
            case 4:
                system("cls");
                printf("\nSeu saldo e: R$%.2f\n", atual->saldo);
                break;

            case 5:
                printf("Digite o valor a ser investido: ");
                scanf("%f", &val);

                retorno = investConta(atual, val, &proj);
                system("cls");

                if(retorno == 3){
                    printf("\nValor invalido.\n");
                    break;
                }
                if(retorno == 2){
                    printf("\nSaldo insuficiente.\n");
                    break;
                }
                printf("\nValor investido com sucesso!!\n");
                printf("\nSeu investimento rendera R$%.2f ao mes.\n", proj);
                break;

            case 6:
                printf("Digite o valor do emprestimo: ");
                scanf("%f", &val);

                retorno = emprestConta(atual, val, &jur);

                system("cls");

                if(retorno == 2){
                    printf("\nValor invalido.\n");
                    break;
                }
                if(retorno == 3){
                    printf("\nVoce nao esta apto a fazer um emprestimo. Divida muito alta\n");
                    break;
                }

                printf("\nEmprestimo feito com sucesso!!\n");
                printf("\nSeu emprestimo tera R$%.2f de juros ao mes.\n", jur);
                break;

            }
        }while(op1 != 7);
                break;

            case 3:
                fflush(stdin);
                printf("Insira seu CPF: ");
                gets(cpfTeste);
                fflush(stdin);
                printf("Digite sua Senha: ");
                gets(senhaTeste);
                fflush(stdin);

                retorno = removerItem(l, cpfTeste, senhaTeste);
                system("cls");

                if(retorno == 2){
                    printf("Banco inexistente\n");
                    break;
                }
                if(retorno == 3){
                    printf("CPF incorreto ou inexistente\n");
                    break;
                }
                if(retorno == 1){
                    printf("Banco sem clientes\n");
                    break;
                }

                printf("\nConta removida com sucesso!!\n");
                printf("\nEspero que possamos nos encontrar novamente em um futuro!!\n");

                break;

        }
    } while(op != 4);

    return 0;
}
