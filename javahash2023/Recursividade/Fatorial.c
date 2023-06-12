#include <stdio.h>

int fat(int n){
	int r;
	//caso base
	printf("fat (%d)\n ",n);
	getch();
	if(n==0){
		printf("fat(0)=1");
		return 1;
	}
	//caso recursivo
	r = n*fat(n-1);
	printf(" fat(%d) = %d\n",n,r);
	getch();
	return r;
}

int main(){
	float valor;
	printf("Valor: ");
	scanf("%f",&valor);
	printf("Fatorial:%d",fat(valor));
	return 0;
}
