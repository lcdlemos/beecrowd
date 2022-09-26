#include <stdio.h>

int main()
{
    int i, N, menor, pos;
    
    scanf("%i", &N);
    
    int A[N];
    
    for(i = 0; i < N; i++){
        scanf("%i", &A[i]);
    }
    
    menor = A[0];
    
    for(i = 0; i < N; i++){
        if(A[i] < menor){
            menor = A[i];
            pos = i;
        }
    }
    
    printf("Menor valor: %i\n", A[pos]);
    printf("Posicao: %i\n", pos);
    
    return 0;
}