#include <stdio.h>

int somaRecursiva(int v[], int tamanho){
    if (tamanho == 0)
        return 0;

    return v[tamanho-1] + somaRecursiva(v, tamanho-1);
}

int main(){
    int v[20], i, resp;

    for(i = 0; i < 20; i++)
        v[i] = i;

    resp = somaRecursiva(v, 20);
    printf("Soma: %d\n", resp);
    
    return 0;
}

