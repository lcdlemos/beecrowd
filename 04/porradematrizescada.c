#include <stdio.h>

int main()
{
    int N, M, i, j, k, w;
    
    scanf("%d %d", &N, &M);
    
    unsigned int MATRIZ[N][M];
    
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%u", &MATRIZ[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            if(j == M - 1){
                for(k = i + 1; k < N; k++){
                    for(w = 0; w <= j; w++){
                        if(MATRIZ[k][w] != 0){
                                return printf("N\n");
                            }
                    }
                    return printf("S\n");
                }
                
            }
            else{
                if(MATRIZ[i][j] != 0){
                    for(k = i + 1; k < N; k++){
                        for(w = 0; w <= j; w++){
                            if(MATRIZ[k][w] != 0){
                                return printf("N\n");
                            }
                        }
                    }
                    j = M;
                }
            }
        }
    }
    return printf("S\n");
}