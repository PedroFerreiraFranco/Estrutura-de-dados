#include <stdio.h>
#include <string.h>

int main(){
	char dna[50], complementar[50];
	int i, n;
	printf("Entre com a sequencia DNA: ");
	gets(dna);
	strupr(dna);
	printf("%s\n",dna);
	n = strlen(dna);
	//gerar fita principal e percorrer
	//if(dna[i] == 'A')
		//complementar = 'T';
		
	 for(i=0;i<n;i++){
	 		if(dna[i] == 'A'){
			complementar[i] = 'T';
		}
		else if(dna[i] == 'T'){
			complementar[i] = 'A';
		}
		else if(dna[i] == 'G'){
			complementar[i] = 'C';
		}
		else if(dna[i] == 'C'){
			complementar[i] = 'G';
		}
		printf("%c ",complementar[i]);
}
	 
	
	 
}
