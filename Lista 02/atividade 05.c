#include <stdio.h>

void decimalParaBinarioRecursivo(int decimal) {
    if (decimal > 0) {
        decimalParaBinarioRecursivo(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal = 10;
    decimalParaBinarioRecursivo(decimal);
    
    return 0;
}

