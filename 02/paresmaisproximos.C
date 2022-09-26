#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, j;
    double DISTANCIA, MENOR = 100000;
    double X[100000], Y[100000];
    
    while(scanf("%i", &N) && N != 0){
        for(i = 0; i < N; i++){
            scanf("%lf %lf", &X[i], &Y[i]);
        }
        if(N != 1){
            for(i = 0; i < N - 1; i++){
                for(j = i + 1; j < N; j++){
                    DISTANCIA = sqrt(pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2));
                    
                    if(DISTANCIA < MENOR){
                        MENOR = DISTANCIA;
                    }
                }
            }
        }
        else{
            DISTANCIA = 10000;
        }
        if(MENOR < 10000){
            printf("%.4lf\n", MENOR);
        }
        else{
            printf("INFINITY\n");
        }

    }
    return 0;
}