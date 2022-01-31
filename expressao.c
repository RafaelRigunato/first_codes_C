#include<stdio.h>

int main() {
    
    double numero_a = 0;
    double numero_b = 0;
    double numero_c = 0;
    double numero_x = 0;
    
    printf(" Informe o números a ");
    scanf("%lf", &numero_a);
    
    printf(" Informe o número b ");
    scanf("%lf", &numero_b);
    
    printf(" Informe os números c ");
    scanf("%lf", &numero_c);
    
    numero_x = 2*(numero_a - numero_c) / 8 - numero_b * 5;
    
    printf("%lf", numero_x);
    
    return 0;
}
