#include <stdio.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

int pesquisa(No* vet, int dado) {
    No* atual = vet;

    while (atual != NULL) {
        if (atual->dado == dado) {
            return 1;
        }
        atual = atual->prox;
    }

    return 0;
}

int main() {

    No* head = (No*)malloc(sizeof(No));
    No* second = (No*)malloc(sizeof(No));
    No* third = (No*)malloc(sizeof(No));
    
    head->dado = 1;
    second->dado = 2;
    third->dado = 3;

    head->prox = second;
    second->prox = third;
    third->prox = NULL;

    int valor = 2;

    int encontrado = pesquisa(head, valor);
    
    if (encontrado) {
        printf("O valor %d foi encontrado na lista.\n", valor);
    } else {
        printf("O valor %d nao foi encontrado na lista.\n", valor);
    }

    free(head);
    free(second);
    free(third);
    
    return 0;
}

