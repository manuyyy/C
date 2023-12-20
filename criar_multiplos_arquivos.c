#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//CRIANDO ARQUIVOS PRÉ DEFINIDOS

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //chamando as funções declaradas abaixo
    teste1();
    teste2();
    teste3();
    return 0;
}

//Declaração de funções para deixar mais organizadinho vizualmente
//Os arquivos já salvam no PC com o conteúdo
void teste1(){
    int num;
    FILE *arquivo1 = fopen("file1.txt", "w");

    printf("Digite um número: ");
    scanf("%d", &num);
    fprintf(arquivo1, "%d", num);

    fclose(arquivo1);
}

void teste2(){
    char nome[200];
    FILE *arquivo2 = fopen("file2.txt", "w");
    fflush(stdin);  //Limpar o buffer do teclado

    printf("Digite o nome: ");
    fgets(nome, sizeof nome, stdin);
    fprintf(arquivo2, "%s", nome);

    fclose(arquivo2);
}

void teste3(){
    char endereco[200];
    FILE *arquivo3 = fopen("file3.txt", "w");

    printf("Digite o endereço: ");
    fgets(endereco, sizeof endereco, stdin);
    fprintf(arquivo3, "%s", endereco);

    fclose(arquivo3);
}
