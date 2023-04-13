#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int x;
	int y;
} tdado;
typedef struct no{
	tdado dado;
	struct no *prox;
}tno;
typedef struct pilha{
	tno *topo;
}tPilha;
//-------------------------------
void inicializa(tPilha *p){
	p->topo = NULL;
}
//-------------------------------
int push(tPilha *p, tdado novoDado){
	tno *novo;
	novo = malloc(sizeof(tno));
	if(novo==NULL)
		return 0;
	novo->dado = novoDado;//atribui o valor
	novo->prox = p->topo;//proximo é quem era o topo
	p->topo = novo;
	return 1;
}
//-------------------------------
tdado pop(tPilha *p){
	tdado removido = p->topo->dado;
	tno *aux = p->topo;// guardar endereço para liberar memória
	p->topo=p->topo->prox;//movendo topo para nó debaixo
	free(aux);//liberar area de menoria
	return removido;
}
//-------------------------------
tdado peek(tPilha p){
	return p.topo->dado;
}
//--------------------------------
int isEmpty(tPilha p){
	if(p.topo==NULL)
		return 1;
	else
		return 0;
	//return p.topo==NULL?1:0;
}
//------------------------------	
void mostraPilha(tPilha p){
	while(p.topo!=NULL){
		printf("[%d | %d]",p.topo->dado.x, p.topo->dado.y);
		p.topo = p.topo->prox; //desce para o prox
	}
	printf("\n");
}
//------------------------------------
