#include <stdio.h>

int main()
{
    int i, j, T, N;
    long long A[60];
    
    scanf("%d", &T);
    
    for(i = 0; i < T; i++){
        scanf("%d", &N);
        A[0] = 0;
        A[1] = 1;
        for(j = 2; j <= N; j++){
            A[j] = A[j - 1] + A[j - 2];
        }
        printf("Fib(%d) = %lld\n", N, A[N]);
    }
    
    return 0;
}