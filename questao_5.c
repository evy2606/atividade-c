#include <stdio.h>

int main() {
    double valor_compra, valor_pagar;
    
    scanf("%lf", &valor_compra);
    
    if (valor_compra > 200.00) {
        valor_pagar = valor_compra * 0.85;
    } else {
        valor_pagar = valor_compra;
    }
    
    printf("Valor a pagar: R$ %.2lf\n", valor_pagar);
    
    return 0;
}