#include <stdio.h>
#include <stdlib.h>
typedef int tdado;
typedef struct no{
	tdado dado;
	struct no *prox, *ant;
}tno;
typedef struct{
	tno *ini,*fim; // head e tail
	int tamanho;
}tdeque;
//-------------------------------
void inicializa(tdeque *minhaDeque){
	minhaDeque->tamanho = 0;
	minhaDeque->ini = NULL;
	minhaDeque->fim = NULL;
}
//------------------------------
int addLast(tdeque *minhaDeque, tdado novoDado){
	tno *novoNo = malloc(sizeof(tno));
	if(novoNo==NULL) // memoria ta cheia
	  return 0;
	novoNo->dado = novoDado;
	novoNo->prox = NULL;
	novoNo->ant = minhaDeque->fim; // altera��o deque 
	if(minhaDeque->ini==NULL) // testando se esta vazia
	  minhaDeque->ini = novoNo;
	else
	  minhaDeque->fim->prox = novoNo;
	minhaDeque->fim = novoNo;    	
	minhaDeque->tamanho++;
	return 1;
}
//---------------------------------------------
tdado removeFirst(tdeque *minhaDeque){
	tdado retorno = minhaDeque->ini->dado; // pegando o dado armazenado no n�
	tno *aux = minhaDeque->ini; // guardando o endereco para limpar a memoria
	minhaDeque->ini = minhaDeque->ini->prox; // removendo, deslocando o apontamento
	if(minhaDeque->ini == NULL) // era o ultimo elemento
	   minhaDeque->fim = NULL;
	else  
	minhaDeque->ini->ant = NULL;
	    // Alteracao da DEQUE  , o anterior do inicio aponta para NULL
	free(aux); // limpando a memoria
	minhaDeque->tamanho--;
	return retorno; // retorno o dado removido
}
//------------------------------
int addFirst(tdeque *minhaDeque, tdado novoDado){
	tno *novoNo = malloc(sizeof(tno));
	if(novoNo==NULL) // memoria ta cheia
	  return 0;
	novoNo->dado = novoDado;
	novoNo->ant = NULL;
	novoNo->prox = minhaDeque->ini; // altera��o deque 
	if(minhaDeque->fim==NULL) // testando se esta vazia
	  minhaDeque->fim = novoNo;
	else
	  minhaDeque->ini->ant = novoNo;
	minhaDeque->ini = novoNo;    	
	minhaDeque->tamanho++;
	return 1;
}
//---------------------------------------------
tdado removeLast(tdeque *minhaDeque){
	tdado retorno = minhaDeque->fim->dado; // pegando o �ltimo dado armazenado no n�
	tno *aux = minhaDeque->fim; // guardando o endereco para limpar a memoria
	minhaDeque->fim = minhaDeque->fim->ant; // removendo, deslocando o apontamento do ultimo para o seu anterior
	if(minhaDeque->fim == NULL) // era o primeiro elemento
	   minhaDeque->ini = NULL;
	else  
	minhaDeque->fim->prox = NULL;
	    // Alteracao da DEQUE  , o proximo do fim aponta para NULL
	free(aux); // limpando a memoria
	minhaDeque->tamanho--;
	return retorno; // retorno o dado removido
}
//------------------------------
int isEmpty(tdeque minhaDeque){
	if(minhaDeque.ini == NULL) // se estiver vazio ini e fim ==NULL
	  return 1;
	else
	  return 0;  
}
//-----------------------------
void printList(tdeque minhaDeque){
	while(minhaDeque.ini != NULL){
		printf("%d -",minhaDeque.ini->dado); // mostro o dado
		minhaDeque.ini = minhaDeque.ini->prox; // deslocando para o prox
	}// fim while
	printf("\n");
}
//-----------------------------
void printInvertida(tdeque minhaDeque){ // alterar
	while(minhaDeque.fim != NULL){
		// percorrer invertida
		printf("%d -",minhaDeque.fim->dado); // mostro o dado
		minhaDeque.fim = minhaDeque.fim->ant; // deslocando para o anterior
	}// fim while
	printf("\n");
}
//-----------------------------
void mostraEndereco(tdeque minhaDeque){
	while(minhaDeque.ini != NULL){
		printf("<- %x| %d [%x] | %x ->\n ",
		        minhaDeque.ini->ant, minhaDeque.ini->dado, minhaDeque.ini , minhaDeque.ini->prox); // mostro o dado
		minhaDeque.ini = minhaDeque.ini->prox; // deslocando para o prox*/
	}// fim while
	
	printf("\n");
}
//-----------------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I ***\n");
	printf("*** Fila Encadeada ***\n");
	printf("1-Add Fim (Inserir)\n");
	printf("2-Remove Ini  (Remover)\n");
	printf("3-Primeiro e ultimo da fila\n");
	printf("4-Mostrar Fila Inversa\n");
	printf("5-Add Ini (Inserir)\n");
	printf("6-Remove Fim (Remover)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//--------------------
int main(){
	int op;
	tdado novoDado;
	tdeque minhaDeque;
	inicializa(&minhaDeque);
			
	do{
		printf("Tamanho da Fila: %d\n\n", minhaDeque.tamanho);
		printf("Ini:%x	Fim:%x\n",minhaDeque.ini, minhaDeque.fim);
		printList(minhaDeque);
		op = menu();
		switch(op){
			case 1: printf("Valor para inserir:");
					scanf("%d",&novoDado);
					if(addLast(&minhaDeque,novoDado)) // ==1
					   printf("Valor inserido:)\n");
					else
					   printf("Fila cheia:(\n");   
				break;
			case 2: if(!isEmpty(minhaDeque)){
				      novoDado = removeFirst(&minhaDeque);
				      printf("Removido: %d\n",novoDado);
					}// fim if
					else
					  printf("Fila vazia :(\n");
			   break;
			case 3: if(!isEmpty(minhaDeque)){
				      //printf("Inicio: %d\n",firstList(minhaDeque));
				      //printf("Fim: %d\n",lastList(minhaDeque));
			         }// fim if 
					 else
					    printf("Fila vazia :(\n"); 
			break;
			case 4: if(!isEmpty(minhaDeque))
			 			printInvertida(minhaDeque);
			break; 
			case 5: printf("Valor para inserir:");
					scanf("%d",&novoDado);
					if(addFirst(&minhaDeque,novoDado)) // ==1
					   printf("Valor inserido:)\n");
					else
					   printf("Fila cheia:(\n");   
				break;	
			case 6: if(!isEmpty(minhaDeque)){
				    novoDado = removeLast(&minhaDeque);
				    printf("Removido: %d\n",novoDado);
					}// fim if
					else
					printf("Fila vazia :(\n");
			break;				
			case 0: printf("Saindo...");  
			break;	
		}// fim switch
		getch();
		system("cls"); 
	}while(op!=0);
}// fim main
