#include <stdio.h>
#include <string.h>

int main()
{
    struct candidato{
        char nome[20], opcao[3];
    } amigo[5];
    
    int i, Sim = 0, amisim = 0, aminao = 0;
    char amigo_sim[20][20], amigo_nao[20][20], auxiliar[20];
    
    for(i = 0; i < 5; i++){
        scanf("%s %s", amigo[i].nome, amigo[i].opcao);
        
        if(strcmp(amigo[i].opcao, "Sim") == 0){
            strcpy(amigo_sim[amisim], amigo[i].nome);
            Sim++;
            amisim++;
        }
        else{
            strcpy(amigo_nao[aminao], amigo[i].nome);
            aminao++;
        }
    }
    
    for (i = 1; i < amisim; i++){
        if (strcmp(amigo_sim[i - 1], amigo_sim[i]) < 0){
            strcpy(auxiliar, amigo_sim[i - 1]);
            strcpy(amigo_sim[i - 1], amigo_sim[i]);
            strcpy(amigo_sim[i], auxiliar);
        }
    }
    
    for (i = 1; i < aminao; i++){
        if (strcmp(amigo_nao[i - 1], amigo_nao[i]) < 0){
            strcpy(auxiliar, amigo_nao[i - 1]);
            strcpy(amigo_nao[i - 1], amigo_nao[i]);
            strcpy(amigo_nao[i], auxiliar);
        }
    }
    
    for(i = 0; i < amisim; i++){
        printf("%s\n", amigo_sim[i]);
    }
    
    for(i = 0; i < aminao; i++){
        printf("%s\n", amigo_nao[i]);
    }

    return 0;
}
