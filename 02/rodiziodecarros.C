#include <stdio.h>
#include <string.h>

int main(void)
{
  char letra, numero, ultimo, PLACA[100];
  int N, j, i, tam, okletr, oknum;
  
  scanf("%i", &N);
  
  for(j = 0; j < N; j++){
    okletr = 0;
    oknum = 0;
    scanf("%s", PLACA);
    tam = strlen(PLACA);
      if(tam != 8 || PLACA[3] != '-'){
          printf("FAILURE\n");
      }
      else{
          for(i = 0; i < 3; i++){
              for(letra = 'A'; letra != '['; letra++){
                  if(PLACA[i] == letra){
                      okletr = okletr + 1;
                  }
              }
          }
          if(okletr == 3){
              for(i = 4; i < 8; i++){
                  for(numero = '0'; numero != ':'; numero++){
                      if(PLACA[i] == numero){
                          oknum = oknum + 1;
                      }
              }
            }
            if(oknum == 4){
                ultimo = PLACA[7];
                switch(ultimo){
                    case '1':
                    case '2':
                    printf("MONDAY\n");
                    break;
                    case '3':
                    case '4':
                    printf("TUESDAY\n");
                    break;
                    case '5':
                    case '6':
                    printf("WEDNESDAY\n");
                    break;
                    case '7':
                    case '8':
                    printf("THURSDAY\n");
                    break;
                    case '9':
                    case '0':
                    printf("FRIDAY\n");
                    break;
                }
            }
            else{
                printf("FAILURE\n");
            }
          }
          else{
              printf("FAILURE\n");
          }
      }
  }
  return 0;
}