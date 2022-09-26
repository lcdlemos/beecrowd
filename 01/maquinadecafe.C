#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A1, A2, A3, T1, T2, T3, TEMPO;
    
    scanf("%i", &A1);
    scanf("%i", &A2);
    scanf("%i", &A3);
    
    T1 = 2*A2 + 4*A3;
    T2 = 2*A1 + 2*A3;
    T3 = 4*A1 + 2*A2;
    
    TEMPO = (T1 + T2 - abs(T1 - T2))/2;         //Adaptado da formula para o maior de 2 numeros
    TEMPO = (TEMPO + T3 - abs(TEMPO - T3))/2;   //Subtraindo o segundo termo, temos o menor
    
    printf("%i\n", TEMPO);
    
    return 0;
}