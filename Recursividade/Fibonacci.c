#include <stdio.h>

int fibo(int n){
	int r;
	printf("Fibo(%d)\n",n);getch();
	if(n==0){
		printf("fibo(%d)=0\n",n);getch();
		return 0;
	}
	if(n==1){
		printf("fibo(%d)=1\n",n);getch();
		return 1;
	}
	r = fibo(n-1) + fibo(n-2);
	printf("fibo(%d)=%d\n",n,r);
	getch();
	return r;
}
int main(){
	int valor;
	printf("Valor: ");
	scanf("%d",&valor);
	printf("Fibonacci: %d",fibo(valor));
	return 0;
}
