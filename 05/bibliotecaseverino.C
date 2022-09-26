#include <stdio.h>

int main()
{
    int N, i, j, menor, troca;
    int registro[1000];
    
    while(scanf("%d", &N) != EOF){
        for(i = 0; i < N; i++){
            scanf("%d", &registro[i]);
        }
        
        for(i = 0; i < N; i++){
    		menor = i;
    		for(j = i + 1; j < N; j++){
    			if(registro[j] < registro[menor]){
    			    menor = j;
    			}
    		}
    		troca = registro[i];
    		registro[i] = registro[menor];
    		registro[menor] = troca;
    	}
    	
    	for(i = 0; i < N; i++){
                printf("%04d\n", registro[i]);	
    	}
    }
    return 0;
}