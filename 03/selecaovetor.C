#include <stdio.h>

int main()
{
    int i, N = 100;
    float A[100];
    
    for(i = 0; i < N; i++){
        scanf("%f", &A[i]);
    }
    
    for(i = 0; i < N; i++){
        if(A[i] <= 10){
            printf("A[%i] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}