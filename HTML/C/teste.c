#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // criando a vari�vel ponteiro para o arquivo
  FILE *pont_arq;

  //abrindo o arquivo
  pont_arq = fopen("arquivo.txt", "a");

  // fechando arquivo
  fclose(pont_arq);

  //mensagem para o usu�rio
  printf("O arquivo foi criado com sucesso!");

  system("pause");
  return(0);
}
