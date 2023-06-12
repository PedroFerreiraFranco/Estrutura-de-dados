#include <stdio.h>

void infinityDream(int n){
	printf("Chamada: %d",n);
	if(n ==0)
		return;
	printf("| Sonhando...\n");getch();
	Sleep(100);
	infinityDream(n-1);
	printf("\nRetornando instancia: %d\n",n);getch();
}

int main(){
	int x;
	scanf("%d",&x);
	infinityDream(x);
}
