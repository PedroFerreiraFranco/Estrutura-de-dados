#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}tdado; 

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct pilha{
	tno *topo;
}tPilha;

//------------------------------------

void inicializa(tPilha *p){
p->topo = NULL;	
}

//------------------------------------

int push(tPilha *p, tdado novoDado){
	tno *novo;
	novo = malloc(sizeof(tno));
	if(novo == NULL)
		return 0;
	novo -> dado = novoDado;//atribuiu o valor
	novo -> prox = p->topo;//proximo é quem era o topo
	p->topo = novo;
	return 1;
}

//------------------------------------

tdado pop(tPilha *p){
	tdado removido = p->topo->dado;
	tno *aux = p->topo;//guardar endereço para liberar espaço de memória
	p->topo = p->topo->prox; //movendo topo para nó debaixo
	free(aux);//libera área de memória
	return removido;
	
}

//------------------------------------

tdado peek(tPilha p){
	return p.topo->dado;
}

//------------------------------------


int isEmpty(tPilha p){
return p.topo==NULL?1:0;
/*	if(p.topo == NULL)
			return 1;
	else
			return 0;
*/			
}

//------------------------------------

void mostraPilha(tPilha p){
	while(p.topo!=NULL){
		printf("[%d|%d] ",p.topo->dado.x,
						  p.topo->dado.y);
		
		p.topo = p.topo->prox;//desce pro próximo da pilha
	}//fim while
	printf("\n");
}

//------------------------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Encadeada ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Peek (Olhar Topo)\n");
	printf("4-Insere ate travar\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------------------
int main(){
	tPilha p1;
	inicializa(&p1);
	tdado dado;
	int op;
	do{
		printf("Endereco do Topo:[%x]\n",p1.topo);
		mostraPilha(p1);
		op = menu();
		switch(op){
			case 1: printf("Dado para pilha:");
					scanf("%d",&dado.x);
					scanf("%d",&dado.y);
					if(push(&p1,dado)==1)
						printf("Inserido com sucesso\n");
			break;
			case 2:	if(!isEmpty(p1)){//se nao for vazio
						dado = pop(&p1);
						printf("Dado removido:[%d,%d]\n",dado.x,dado.y);
					}
					else
						printf("Pilha vazia\n");
				break;
			case 3:	if(!isEmpty(p1)){//se nao for vazio
						dado = peek(p1);
						printf("Dado do topo:[%d,%d]\n",dado.x,dado.y);
					}
					else
						printf("Pilha vazia\n");
				break;		
			case 4: srand(time(NULL));
				while(1){
					dado.x = rand()%10;
					dado.y = rand()%10;
					push(&p1,dado);
				}
				break;				
		}// fim switch
	    getch();// pausa
		system("cls");// limpa tela	
	}while(op!=0);
	return 0;                                
}
