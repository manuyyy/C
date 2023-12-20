#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("CATEGORIA NATAÇÃO");
    printf("\n------------------");

    printf("\nInsira a idade: ");
    scanf("%d", &idade);

    while(idade < 5)
    {
        printf("\nValor inválido !");
        printf("\nDigite novamente a idade: ");
        scanf("%d", &idade);
        system("cls");
    }

    system("cls");

    if(idade >= 5 && idade <= 7)
    {
        printf("\n-----------------------");
        printf("\nIdade inserida: %d",idade);
        printf("\n-----------------------");
        printf("\nCategoria: Infantil A");
        printf("\n\n");
    }
    else if(idade >= 8 && idade <= 10)
    {
        printf("\n-----------------------");
        printf("\nIdade inserida: %d",idade);
        printf("\n-----------------------");
        printf("\nCategoria: Infantil B");
        printf("\n\n");
    }
    else if(idade >= 11 && idade <= 13)
    {
        printf("\n-----------------------");
        printf("\nIdade inserida: %d",idade);
        printf("\n-----------------------");
        printf("\nCategoria: Juvenil A");
        printf("\n\n");
    }
    else if(idade >= 14 && idade <= 17)
    {
        printf("\n-----------------------");
        printf("\nIdade inserida: %d",idade);
        printf("\n-----------------------");
        printf("\nCategoria: Juvenil B");
        printf("\n\n");
    }
    else
    {
        printf("\n-----------------------");
        printf("\nIdade inserida: %d",idade);
        printf("\n-----------------------");
        printf("\nCategoria: Sênior");
        printf("\n\n");
    }

    return 0;
}
