int topoPilha(pilha *p) {
    if (p == NULL || p->topo == NULL) {
        return -1;
    }
    return p->topo->valor;
}

