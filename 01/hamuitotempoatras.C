#include <stdio.h>

int main()
{
    int i, N, DATA, ANO;
    
    scanf("%i", &N);
    
    for(i = 0; i < N; i++){
        scanf("%i", &ANO);
        if(ANO >= 2015){
            DATA = ANO - 2014;
            printf("%i A.C.\n", DATA);
        }
        else{
            DATA = 2015 - ANO;
            printf("%i D.C.\n", DATA);
        }
    }

    return 0;
}