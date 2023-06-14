#include <stdio.h>

void f1(int n){
	if(n==0){
		printf(" Fim |");
	}else{
		f1(n-1);
		printf(" %d |",n);
		Sleep(300);
	}
}
void f2(int n){
	if(n==0){
		printf(" Fim |");
	}else{		
		printf(" %d |",n);
		Sleep(300);
		f2(n-1);
	}
}

int main(){
	int valor;
	printf("valor: ");
	scanf("%d",&valor);
	printf("\nF1: ");
	f1(valor);
	printf("\n");
	printf("\nF2: ");
	f2(valor);
	return 0;
}
