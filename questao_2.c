#include <stdio.h>

int main() {
    int velocidade;
    scanf("%d", &velocidade);
    
    int limite = 60;
    int valor_multa_por_km = 10;
    
    if (velocidade > limite) {
        int multa = (velocidade - limite) * valor_multa_por_km;
        printf("Multado\n");
        printf("Valor da multa: R$ %.2f\n", (float)multa);
    }
    
    return 0;
}
