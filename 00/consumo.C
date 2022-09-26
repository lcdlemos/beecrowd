#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int X;
    float Y, CONSUMOMEDIO;
    
    scanf("%i", &X);
    scanf("%f", &Y);
    
    CONSUMOMEDIO = X/Y;
    
    printf("%.3f km/l\n", CONSUMOMEDIO);
 
    return 0;
}