#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int qtde_pacientes,total_pacientes = 0;
    float alturas, soma=0, media_alturas = 0, maior_altura = 0;

    printf("Insira a quantidade de pacientes: ");
    scanf("%d", &qtde_pacientes);

    for(int i = 1; i <= qtde_pacientes; i++)
    {
        printf("\nInsira a altura do paciente %d: ",i);//usar virgula ao invez de ponto
        scanf("%f", &alturas);


        soma = soma + alturas;

        /*Maior altura*/
        if(alturas > maior_altura)
        {
            maior_altura = alturas;
        }

        /*Alturas entre '0.6' e '1.2'*/
        if(alturas >= 0.6f && alturas <= 1.2f)
        {
            total_pacientes++;
        }

    }

    //*media de alturas*//
    media_alturas = soma / qtde_pacientes;

    printf("\n\nA média de Altura dos Pacientes é: %.2f", media_alturas);
    printf("\nA maior altura registrada é de: %.2f", maior_altura);
    printf("\n\nO total de pacientes com alturas entre '0.6' e '1.2' é de %d paciente(s)", total_pacientes);
    printf("\n\n\n");

    return 0;
}
