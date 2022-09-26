#include <stdio.h>
#include <math.h>

int main() {
 
    float A, B, C, DELTA, R1, R2;
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    
    DELTA = (B*B)-(4*A*C);
    R1 = (-1*B + sqrt(DELTA))/(2*A);
    R2 = (-1*B - sqrt(DELTA))/(2*A);
    
    if(DELTA < 0 || A==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
   
    return 0;
}