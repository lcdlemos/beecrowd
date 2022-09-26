#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    char escolha[4];
} amigo;

int compara(const void *, const void *);

int main(){
    amigo inscrito[10000];
    char esc[50];
    int a, j, escolhido;

    for(a = 0; scanf("%s %s", inscrito[a].nome, inscrito[a].escolha) && strcmp(inscrito[a].nome, "FIM") != 0; a++){

        for(j = escolhido = 0; j < a; j++){
            if(!strcmp(inscrito[escolhido].escolha, "YES")){
                if(!strcmp(inscrito[j+1].escolha, "YES") && strlen(inscrito[escolhido].nome) < strlen(inscrito[j+1].nome)){
                    escolhido = j+1;
                }
            }
            else{
                escolhido++;
                j++;
            }
        }
    }
    
    strcpy(esc, inscrito[escolhido].nome);

    qsort(inscrito, a, sizeof(amigo), compara);

    printf("%s\n",inscrito[0].nome);

    for(j = 1; j < a; j++){
        if(strcmp(inscrito[j].nome, inscrito[j-1].nome)){
            printf("%s\n",inscrito[j].nome);
        }
    }
    
    printf("\nAmigo do Habay:\n%s\n", esc);

    return 0;
}

int compara(const void *p1, const void *p2){
    
    amigo *i = (amigo *) p1, *j = (amigo *) p2;

    if(strcmp(j->escolha, i->escolha) == 0){
        return strcmp(i->nome, j->nome);
    }
    else{
        return strcmp(j->escolha, i->escolha);
    }
}