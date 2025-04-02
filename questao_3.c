#include <stdio.h>

int main() {
    double valor_venda;
    
    scanf("%lf", &valor_venda);
    
    if (valor_venda > 30000.00) {
        printf("Parab\u00e9ns, voc\u00ea superou a meta do m\u00eas!\n");
    }
    
    return 0;
}
