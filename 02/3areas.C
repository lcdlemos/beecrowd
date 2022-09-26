#include <stdio.h>
#include <math.h>

int main()
{
    double a, Aexterna, Apontas, Ainterna;
    while(scanf("%lf", &a) != EOF){
        if(a >= 0 && a <= 10000){
            Aexterna = (a*a)*(4 - 2*M_PI/3 - sqrt(3));    //4 x (Aquadrado - Aequilatero - 2.Asetor30graus)
            Apontas = (a*a)*(4 - M_PI) - 2*Aexterna;      //4 x (A quadrado - 1/4.Acircunferencia - 2.1/4.Aexterna)
            Ainterna = (a*a) - Aexterna - Apontas;      //Aquadrado - Aexterna - Apontas
            printf("%.3lf %.3lf %.3lf\n", Ainterna, Apontas, Aexterna);
        }
    }
    return 0;
}