#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");

    float salario_min;
    int qtde_anos;

    float salario_fixo = 0, salario_bruto = 0, valor_adicional = 0,desc_INSS = 0 ,salario_liq = 0;

    printf("Insira o valor do sálario-mínimo: ");
    scanf("%f", &salario_min);

    printf("Insira a quantidade de anos na empresa do funcíonario: ");
    scanf("%d", &qtde_anos);

    /*salario fixo é igual a dois salario min*/
    salario_fixo = salario_min * 2;

    /*bonus adicional*/
    valor_adicional = salario_min * (qtde_anos * 0.075f);

    /*calculo do salario bruto*/
    salario_bruto = salario_fixo + valor_adicional;

    /*desconto*/
    desc_INSS = (22.7f / 100.0) * salario_bruto;

    /*calculo do salario liquido*/
    salario_liq = salario_bruto - desc_INSS;

    printf("\n\nTOTAL: ");

    printf("\nTotal Salário fixo:........R$%.2f",salario_fixo);

    printf("\nTotal Valor Adicional:.....R$%.2f",valor_adicional);

    printf("\nTotal Salário Bruto:.......R$%.2f",salario_bruto);

    printf("\nTotal Desconto:............R$%.2f",desc_INSS);

    printf("\nTotal Salário Líquido:.....R$%.2f",salario_liq);

    printf("\n\n\n");

    return 0;
}
