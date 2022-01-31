#include<stdio.h>

int main() {
    
    int numero_mes = 0;
    int numero_dias = 0;
    
    printf(" informe o número de meses ");
    scanf("%d", &numero_mes);
    
    numero_dias = numero_mes * 30;
    
    printf(" os meses informados contém: %d", numero_dias);
    
    
    return 0;
    
}

