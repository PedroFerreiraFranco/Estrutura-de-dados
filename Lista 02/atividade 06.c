#include <stdio.h>

int qtd = 0;

int h(int m, int n) {
    qtd++;
    
    if (n == 1)
        return m + 1;
    if (m == 1)
        return n + 1;
    
    int resultado = h(m, n - 1) + h(m - 1, n);
    return resultado;
}

int main() {
    int resultado = h(3, 3);
    printf("O retorno eh: %d\n", resultado);
    printf("A funcao foi chamada %d vezes\n", qtd);
    
    return 0;
}

