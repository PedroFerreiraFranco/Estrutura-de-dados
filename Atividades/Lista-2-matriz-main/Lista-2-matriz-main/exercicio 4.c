#include <stdio.h>
#include <stdlib.h>

void geraMatriz(int m[][100], int linhas,int cols){
	int i,j;
	srand(time(NULL));
	_sleep(1000);
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j]=rand()%10;
		}// fim for j
	}// fim for i
}// fim funcao gera

void printMatriz(int m[][100], int linhas, int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%2d |",m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}// fim funcao printMatriz

int main(){
	int m1[100][100],lin,cols, i, j, cont=0, x;
	float p1, p2;
	printf("Qtde de linhas e cols:");
	scanf("%d%d",&lin,&cols);
	printf("Numero para ser verificado:");
	scanf("%d",&x);
	
	geraMatriz(m1,lin,cols);
	printMatriz(m1,lin,cols);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(m1[i][j]==x)
			 cont++;
printf("O numero %d foi repetido %dx",x,cont);	
}
