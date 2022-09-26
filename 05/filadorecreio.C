#include <stdio.h>

int main()
{
    int N, M, P, i, j, chave, k, semtrocas;
    int notas[1000], ordem[1000];
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        
        scanf("%d", &M);
        
        for(j = 0; j < M; j++){
            scanf("%d", &notas[j]);
            ordem[j] = notas[j];
        }
        
        semtrocas = 0;
        
        for(j = 1; j < M; j++){
            
            chave = notas[j];
            k = j - 1;
            
            while((k >= 0) && (chave > ordem[k])){
                ordem[k + 1] = ordem[k];
                ordem[k] = chave;
                k--;
            }
        }
 
        for(j = 0; j < M; j++){
            if(ordem[j] == notas[j]){
                semtrocas++;
            }
        }
        printf("%d\n", semtrocas);
    }
    return 0;
}