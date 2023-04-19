int existe(tfila *f, tdado x) {
    int i = f -> ini;
    int n = f -> qtd;
    	while (n > 0) {
        	if (f->elem[i]==x) {
            return 1;
        	}
        	i = (i + 1) % MAX;
       	 	n--;
    	}
    return 0;
}
