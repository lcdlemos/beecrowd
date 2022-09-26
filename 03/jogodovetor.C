#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, Q, i, L, R, Kesimo, j, K, w, z, vezes, G, D;
    char vencedor;
    
    scanf("%d %d", &N, &Q);
    
    unsigned long int X[N + 1], O[N + 1], menor;
    
    for(i = 1; i <= N; i++){
        scanf("%lu", &X[i]);
    }
    
    for(i = 0; i < Q; i++){
        scanf("%d %d %d %d %d", &L, &R, &Kesimo, &G, &D);
        
        w = 1;
        vezes = 0;
        for(j = L; j <= R; j++){
            O[w] = X[j];
            w++;
        }
        
        if(L == R){
            menor = O[L];
        }
        else{
            for(w = 1; w <= R - L; w++){
                
                menor = O[w];
                
                for(z = w + 1; z <= R - L + 1; z++){
                    
                    if(O[z] < O[w]){
                        menor = O[z];
                        O[z] = O[w];
                        O[w] = menor;
                    }
                }
            }
        }
        
        for(j = 1; j <= R - L + 1; j++){    //Subvetor ordenado
            if(O[Kesimo] == O[j]){
                vezes++;
            }
        }
        
        if(abs(G - vezes) < abs(D - vezes)){
            vencedor = 'G';
        }
        else if(abs(G - vezes) > abs(D - vezes)){
            vencedor = 'D';
        }
        else{
            vencedor = 'E';
        }
        
        printf("%lu %d %c\n", O[Kesimo], vezes, vencedor);

    }
    
    return 0;
}