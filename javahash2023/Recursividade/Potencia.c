#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp){
	int r;
	
	//passo base
	printf("%d ^ %d\n",base,exp);
	getch();
	
	if(exp==0){
		printf("%d ^ 0 = 1\n",base);
		return 1;
	}
	
	//passo recursivo
	r = base *potencia(base, exp-1);
	printf("%d ^ %d = %d\n",base,exp,r);
	getch();
	return r;
	
	
}

int main(){
	int base, exp;
	
	printf("Qual o valor da base? ");
	scanf("%d",&base);

	printf("Qual o valor da potencia? ");
	scanf("%d",&exp);	
	
	printf("%d elevado a %d é = %d ",base,exp,potencia(base,exp));
}
