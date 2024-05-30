#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sorteado = 0;
    srand(time(NULL)); //pros num ficarem aleátorios

    sorteado = rand() % 2; //mostra 0 ou 1

    printf("%d\n", sorteado); //só pra confirmar qual caiu

    if(sorteado == 0)
    {
        printf("\n  0000");
        printf("\n 0    0");
        printf("\n0      0");
        printf("\n0 Cara 0");
        printf("\n0      0");
        printf("\n 0    0");
        printf("\n  0000");
        printf("\n");
    }
    else
    {
        printf("\n  00000");
        printf("\n 0     0");
        printf("\n0       0");
        printf("\n0 Coroa 0");
        printf("\n0       0");
        printf("\n 0     0");
        printf("\n  00000");
        printf("\n");
    }


    return 0;
}
