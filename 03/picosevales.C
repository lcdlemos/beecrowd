#include <stdio.h>

int main()
{
    int N, i, PADRAO = 0;
    
    scanf("%d", &N);
    
    int H[N];
    
    for(i = 0; i < N; i++){
        scanf("%d", &H[i]);
    }
    
    if(N > 2){
        for(i = 2; i < N; i++){
            if((H[i] > H[i - 1] && H[i - 1] < H[i - 2]) || (H[i] < H[i - 1] && H[i - 1] > H[i - 2])){
                PADRAO = 1;
            }
            else{
                PADRAO = 0;
                break;
            }
        }
    }
    else{
        if(H[0] != H[1]){
            PADRAO = 1;
        }
    }
    
    printf("%d\n", PADRAO);

    return 0;
}