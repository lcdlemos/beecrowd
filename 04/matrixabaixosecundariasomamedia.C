#include <stdio.h>

int main()
{
    int i, j, q = 0;
    char OPERACAO;
    float SOMA = 0, MEDIA;
    float MATRIZ[12][12];
    
    scanf(" %c", &OPERACAO);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f" , &MATRIZ[i][j]);
        }
    }
    
    /*for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%-7.1f" , MATRIZ[i][j]);
        }
        printf("\n");
    }*/
    
    switch(OPERACAO){
        case 'S':
        for(i = 1; i < 12; i++){
            for(j = 12 - i; j < 12; j++){
                SOMA += MATRIZ[i][j];
            }
        }
        printf("%.1f\n", SOMA);
        break;
        
        case 'M':
        for(i = 1; i < 12; i++){
            for(j = 12 - i; j < 12; j++){
                SOMA += MATRIZ[i][j];
                q++;
            }
        }
        MEDIA = SOMA/q;
        printf("%.1f\n", MEDIA);
        break;
        
        default:
        break;
    }

    return 0;
}