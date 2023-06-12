#include <stdio.h>
#include <stdlib.h>

int cont=0;

int fibo(int n){
	int r;
	cont=cont+1;
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	r = fibo(n-1) + fibo(n-2);
	return r;
}
int main(){
	int valor;
	int op;
	int i;
	
	scanf("%d",&op);
	for(i=0;i<op;i++){
	scanf("%d",&valor);
	printf("fib(%d) = %d calls = %d\n",valor,cont-1,fibo(valor));
	cont=0;
}
}
