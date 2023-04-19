int ordemCrescente(no *n) {
    no *atual = n;
    int anterior = int_min;
    while (atual != NULL) {
        if (atual->valor < valorAnterior) {
            return 0;
        }
        valorAnterior = atual->valor;
        atual = atual->prox;
    }
    return 1; 
}

