#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//CRIAR 'N' ARQUIVOS

int main(){
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    printf("Deseja criar arquivo? (S/N)\n");
    scanf(" %c", &opcao);

    if(toupper(opcao)=='S'){
        CriarArquivos();
    }else{
        return 0;
    }
    return 0;
}

//Função para criar qualquer arquivo que quiser
//Só cria arquivos
void CriarArquivos(){
    char nomeArquivo[200];
    FILE *novoArquivo;

    printf("\nDigite o nome do novo arquivo(adicione no final '.txt'): \n");
    scanf(" %s", nomeArquivo);

    novoArquivo = fopen(nomeArquivo, "w");

    printf("Novo arquivo criado com sucesso: %s\n", nomeArquivo);
    fclose(novoArquivo);
}
