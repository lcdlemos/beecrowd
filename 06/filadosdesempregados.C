#include <stdio.h>

int main(){
    
    struct desempregados{
        int valor;
        int proximo;
        int anterior;
    }candidatos[21];
    
    int N, k, m;

    while (1) {
        int c, dist1, dist2;
        int restantes;

        scanf("%d %d %d", &N, &k, &m);

        if(!(N || k || m)){
            break;
        }

        for(c = 1; c <= N; c++){
            candidatos[c].valor = c;
            candidatos[c].anterior = (c == 1) ? N : c - 1;
            candidatos[c].proximo = (c == N) ? 1 : c + 1;
        }
        
        candidatos[0].proximo = 1;
        candidatos[N + 1].anterior = N;

        restantes = N;
        dist1 = 0;
        dist2 = N + 1;

        while(1){
            for (c = 0; c < k; c++){
                dist1 = candidatos[dist1].proximo;
            }
            for (c = 0; c < m; ++c){
                dist2 = candidatos[dist2].anterior;
            }

            printf("%3d", candidatos[dist1].valor);
            restantes--;
            
            if(dist1 != dist2){
                printf("%3d", candidatos[dist2].valor);
                restantes--;
            }

            if (candidatos[dist1].anterior == dist2 || candidatos[dist1].proximo == dist2){
                if (candidatos[dist1].anterior == dist2) {
                    candidatos[dist1].anterior = candidatos[dist2].anterior;
                    candidatos[dist2].proximo = candidatos[dist1].proximo;
                }
                if (candidatos[dist1].proximo == dist2){
                    candidatos[dist1].proximo = candidatos[dist2].proximo;
                    candidatos[dist2].anterior = candidatos[dist1].anterior;
                }
            }

            candidatos[candidatos[dist1].anterior].proximo = candidatos[dist1].proximo;
            candidatos[candidatos[dist1].proximo].anterior = candidatos[dist1].anterior;
            
            if(dist1 != dist2){
                candidatos[candidatos[dist2].anterior].proximo = candidatos[dist2].proximo;
                candidatos[candidatos[dist2].proximo].anterior = candidatos[dist2].anterior;
            }

            if(restantes > 0){
                putchar(',');
            }
            else{
                putchar('\n');
                break;
            }
        }
    }
    return 0;
}