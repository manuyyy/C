#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));

    int Xa, Ya, Xb, Yb, distancia = 0;


    Xa = 0 + rand()% (10 - 0 + 1);
    Ya = 0 + rand()% (10 - 0 + 1);
    Xb = 0 + rand()% (10 - 0 + 1);
    Yb = 0 + rand()% (10 - 0 + 1);

    distancia = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2));

    printf("Cordenadas do ponto A: \nx: %d | y: %d",Xa,Ya);

    printf("\n\nCordenadas do ponto B: \nx: %d | y: %d",Xb,Yb);

    printf("\n\nDistancia entre ponto A e ponto B: %d",distancia);

    printf("\n\n\n");

    return 0;
}
