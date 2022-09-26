#include <stdio.h>

int main() {

    int X, i;
    scanf("%i", &X);
    
    while(X != 0){
        for(i = 1; i <= X; i++){
            if(i != X){
                printf("%i ", i);
            }
            else{
                printf("%i\n", i);
            }
        }
            scanf("%i", &X);
    }
    return 0;
}