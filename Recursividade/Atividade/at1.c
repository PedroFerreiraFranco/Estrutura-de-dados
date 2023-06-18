#include <stdio.h>
long int memo[100];

void mostraVetor(int v[], int n){
	int i;
	for(i=0;i<=n;i++)
	  printf("%d |",v[i]);
	
	printf("\n");  
}

//---------------------------------------------------------------//
long int fibDinamico(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(memo[n]!=-1)//verifica se já foi calculado
		return memo[n];//retorna direto
		
	memo[n] = fibDinamico(n-1)+fibDinamico(n-2);//calcula o novo fib
	return memo[n];//repois retorna o valor e salva
}
//---------------------------------------------------------------//
int fibRecursivo(int n){
	int r;
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	r= fibRecursivo(n-1)+fibRecursivo(n-2);	
	return r;
}
//---------------------------------------------------------------//
int main(){
	double ini,fim, trec;
	int n=40,i;
	long long res;
	//inicializar o vetor de memorização
	for(i=0;i<=n;i++)
		memo[i]=-1;

	ini = clock();	
	for(i=0;i<=n;i++){
		printf("Termo %d da sequencia de Fibonacci=%d\n",i,fibDinamico(i));
	}
	fim = clock();
	trec = (fim-ini) / 1000; 
	printf("Tempo:%.3lf\n", trec);
	
	ini = clock();	
	for(i=0;i<=n;i++){
		printf("Termo %d da sequencia de Fibonacci=%d\n",i,fibRecursivo(i));
	}
	fim = clock();
	trec = (fim-ini) / 1000; 
	printf("Tempo:%.3lf\n", trec);
	
	return 0;
}
