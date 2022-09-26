#include <stdio.h>
#include <string.h>

int main() {
    
    int N = 0, i, j, YES = 0, tamanho = 0;
    char nomes[100][20], opcao[100][20], saida[100][20], escolhido[20], aux[20];
    
    while((scanf("%s %s ", nomes[N], opcao[N])) && (strcmp(nomes[N], "FIM") != 0)){
            if (strcmp(opcao[N], "YES") == 0){
                YES++;
                if(strlen(nomes[N]) > tamanho){
                    strcpy(escolhido, nomes[N]);
                    tamanho = strlen(nomes[N]);
                }
            }
            
        N++;
    }
    
    for (i = 1; i < N - 1; i++){
        for (j = 1; j < N; j++){
            if (strcmp(nomes[j - 1], nomes[j]) > 0){
                strcpy(aux, nomes[j - 1]);
                strcpy(nomes[j - 1], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
    
    for (i = 0; i < N - 1; i++){
        if(strcmp(nomes[i], nomes[i+1]) == 0){
            
        }
        else{
            printf("%s\n", nomes[i]);
        }
    }
    
    printf("\nAmigo do Habay:\n%s", escolhido);
    
    return 0;
}