#include <stdio.h>

int main() {
    double nota1, nota2, nota3, media;
    
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3.0;
    
    printf("M\u00e9dia: %.2lf\n", media);
    
    if (media >= 6.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}