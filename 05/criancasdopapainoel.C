#include <stdio.h>
#include <string.h>

int main() {
    
    int N, i, j, comportados = 0;
    char sinal;
    char nomes[100][20], aux[20];
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%c %s ", &sinal, nomes[i]);
        if (sinal == '+')
            comportados++;
    }
    
    for (i = 1; i < N; i++){
        for (j = 1; j < N; j++){
            if (strcmp(nomes[j - 1], nomes[j]) > 0){
                strcpy(aux, nomes[j - 1]);
                strcpy(nomes[j - 1], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
    
    for (i = 0; i < N; i++){
        printf("%s\n", nomes[i]);
    }
    
    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportados, N - comportados);
    
    return 0;
}