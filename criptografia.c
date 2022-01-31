#include<stdio.h>

int main () {
    
   int lista [10] = {1,2,3,4,5,6,7,8,9,10};
   
   scanf("%d%d%d%d%d%d%d%d%d%d", &lista[0], &lista[1],
                                 &lista[2], &lista[3],
                                 &lista[4], &lista[5],
                                 &lista[6], &lista[7],
                                 &lista[8], &lista[9]);
    
    for(int i = 0; i < 11; i++) {
        printf("%c", lista[i]);
    };
        
        
    return 0;
}
