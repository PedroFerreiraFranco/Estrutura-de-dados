int tamanhoFila(no *n) 
    int tamanho=0;
    no *atual=n;
    	while (atual != NULL) {
        	tamanho++;
        	atual = atual->prox;
    	}
    return tamanho;
}
