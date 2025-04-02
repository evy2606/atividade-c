#include <stdio.h>

int main() {
    int tempo_casa;
    double salario, bonus;
    
    scanf("%d", &tempo_casa);
    scanf("%lf", &salario);
    
    if (tempo_casa < 3) {
        bonus = salario * 0.50;
    } else {
        bonus = salario * 0.75;
    }
    
    printf("B\u00f4nus: R$ %.2lf\n", bonus);
    
    return 0;
}
