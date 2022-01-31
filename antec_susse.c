//Nesse exercício, você deverá implementar um algoritmo que receba um único valor inteiro. 
//Em seguida, o algoritmo deve calcular e informar o antecessor e o sucessor do número recebido na entrada.

#include<stdio.h>

int main() {
    
    int numero = 0;
    int sucessor = 0;
    int antec = 0;
    
    printf(" informe o valor: ");
    scanf("%d", &numero);
    
    sucessor = numero + 1;
    antec = numero -1;
    
    printf(" O antecessor é: %d\n", antec);
    
    printf(" O sucessor é: %d",sucessor);
  
    
    return 0;
    
