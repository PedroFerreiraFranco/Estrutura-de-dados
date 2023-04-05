#include <stdio.h>
#include <stdlib.h>
#include "..\VetLib.h"

int main(){
	int vet[100], n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("Entre com os elementos do vetor: ");
	leiaVetor(vet,n);
	printf("\nVetor \n");
	printVet(vet,n);
	printf("Menor numero do vetor:%d\n",menorVet(vet,n));
	return 0;
}
