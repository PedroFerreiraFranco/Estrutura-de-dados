#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

void removerElementosPares(No** head) {
    if (*head == NULL) {
        return;
    }

    No* atual = *head;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->dado % 2 == 0) {
            if (anterior == NULL) {
                *head = atual->prox;
                free(atual);
                atual = *head;
            } else {    
                anterior->prox = atual->prox;
                free(atual);
                atual = anterior->prox;
            }
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
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
    
    removerElementosPares(&head);
    
    No* atual = head;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    

    free(head);
    free(second);
    free(third);
    
    return 0;
}

