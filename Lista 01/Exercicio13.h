int posicao(tfila *f, tdado valor) {
    int pos = 1;
    tno *aux = f->ini;
    	while (aux!=NULL) {
        	if (aux->dado==valor) {
            return pos;
        	}
        	aux = aux->prox;
        	pos++;
    	}
    return -1;
}
