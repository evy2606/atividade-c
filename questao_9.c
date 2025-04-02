#include <stdio.h>

int main() {
    double valor_compra, valor_venda;
    
    scanf("%lf", &valor_compra);
    
    if (valor_compra < 100.00) {
        valor_venda = valor_compra * 1.40;
    } else {
        valor_venda = valor_compra * 1.30;
    }
    
    printf("Valor de venda: R$ %.2lf\n", valor_venda);
    
    return 0;
}
