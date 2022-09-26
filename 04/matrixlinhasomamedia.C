#include <stdio.h>

int main()
{
    int L, i, j;
    char OPERACAO;
    float SOMA = 0, MEDIA = 0;
    float MATRIZ[12][12];
    
    scanf("%d", &L);
    scanf(" %c", &OPERACAO);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f" , &MATRIZ[i][j]);
        }
    }
    
    switch(OPERACAO){
        case 'S':
        for(j = 0; j < 12; j++){
            SOMA += MATRIZ[L][j];
            printf("%f.1 ", SOMA);
        }
        printf("%.1f\n", SOMA);
        break;
        
        case 'M':
        for(j = 0; j < 12; j++){
            SOMA += MATRIZ[L][j];
        }
        MEDIA = SOMA/12;
        printf("%.1f\n", MEDIA);
        break;
        
        default:
        break;
    }

    return 0;
}