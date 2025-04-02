#include <stdio.h>

int main() {
    int ano;
    
    // Lendo o ano de nascimento
    scanf("%d", &ano);
    
    // Verificando se nasceu na década de 90
    if (ano >= 1990 && ano <= 1999) {
        printf("Nasceu na d\u00e9cada de 90!\n");
    }
    
    return 0;
}
