#include <stdio.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

int verificarOrdemCrescente(No* head) {
    if (head == NULL || head->prox == NULL) {
        return 1;
    }

    No* atual = head;
    while (atual->prox != NULL) {
        if (atual->dado > atual->prox->dado) {
            return 0;  
        }
        atual = atual->prox;
    }

    return 1;  
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
    
    int ordemCrescente = verificarOrdemCrescente(head);
    
    if (ordemCrescente) {
        printf("A lista esta em ordem crescente.\n");
    } else {
        printf("A lista nao esta em ordem crescente.\n");
    }
    
    free(head);
    free(second);
    free(third);
    
    return 0;
}

