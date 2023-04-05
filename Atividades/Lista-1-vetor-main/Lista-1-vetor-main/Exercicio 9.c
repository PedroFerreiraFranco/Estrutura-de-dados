#include <stdio.h>
#include <string.h>
#include "vetlib.h"

int main(){
	int vet[50],n,busca,res;
	printf("Quantidade de elementos do vetor: ");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Vetor gerado:\n");
	printVet(vet,n);
	printf("Valor de busca: ");
	scanf("%d",&busca);
	res = existe(busca,vet,n);
	printf("%d foi encontrado %d vez(es)\n",busca,res);
	return 0;
	
}
