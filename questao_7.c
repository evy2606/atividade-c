#include <stdio.h>

int main() {
    int numero;
    
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("\u00cdmpar\n");
    }
    
    return 0;
}
