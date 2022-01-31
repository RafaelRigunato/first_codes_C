
#include<stdio.h>

int main() {
    
    int numero_a = 0;
    int numero_b = 0;
    
    printf(" insira o primeiro número: ");
    scanf("%d", &numero_a);
    
    printf(" insira o segundo número: ");
    scanf("%d", &numero_b);
    
    numero_a = numero_a + numero_b;
    numero_b = numero_a - numero_b;
    numero_a = numero_a - numero_b;
    
    printf("%d\n",numero_a);
    printf("%d",numero_b);
    
    return 0;
}
