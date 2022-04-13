 Lista aux = *L;
    Lista aux2 = NULL;



while(aux != NULL){
    aux2 = aux->ant;
    aux->ant = aux->prox;
    aux->prox = aux2;
    aux = aux->ant;
  }
 free(aux);
 return 1;
