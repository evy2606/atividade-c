#include <stdio.h>

int main() {
    int consumo;
    double valor;
    
    scanf("%d", &consumo);
    
    if (consumo <= 10) {
        valor = 15 * consumo;
    } else {
        valor = (15 * 10) + (20 * (consumo - 10));
    }
    
    printf("Valor a pagar: R$ %.2lf\n", valor);
    
    return 0;
}
