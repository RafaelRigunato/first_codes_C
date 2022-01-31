#include<stdio.h>

int main() {
    
    float nota_1 = 0;
    float nota_2 = 0;
    float nota_3 = 0;
    float soma_notas = 0;
    float media_notas = 0;
    
    
    scanf("%f", &nota_1);
    
  
    scanf("%f", &nota_2);
    
    
    scanf("%f", &nota_3);
    
    soma_notas = nota_1 + nota_2 + nota_3;
    
    media_notas = soma_notas / 3;
    
    printf("%f", media_notas);
    
    
    return 0;
    
}
