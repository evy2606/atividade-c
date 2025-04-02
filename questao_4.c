#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    
    int soma = A + B;
    
    if (soma > C) {
        printf("%d\n", soma);
    }
    
    return 0;
}