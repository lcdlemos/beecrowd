#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int A, B, C, MAIOR;
    
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    
    MAIOR = (A + B + abs(A - B))/2;
    MAIOR = (MAIOR + C + abs(MAIOR - C))/2;
    
    printf("%.i eh o maior\n", MAIOR);
 
    return 0;
}