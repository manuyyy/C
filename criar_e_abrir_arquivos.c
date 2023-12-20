#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>



int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *novoArquivo;
    FILE *chamaArquivo;
    int  verificar =1, contador = 0;
    char ArquivoNome[200], nomeArquivo[200];
    char lendoConteudo, opcao;


    //PARA CRIAR ARQUIVO
    do{
        printf("Deseja CRIAR arquivo? (S/N)\n");
        opcao = getche();
        //getche é como um scanf só que ele le diretamente do buffer
        //le e ja vai para proximo comando

        printf("\n\n");
        if(toupper(opcao)=='S'){
            printf("\nDigite o nome do novo arquivo(adicione no final '.txt'): \n");
            scanf(" %s", nomeArquivo);
            do{
                strcpy  (ArquivoNome, nomeArquivo);//copia string 2 para string 1
                chamaArquivo = fopen(ArquivoNome, "r");
                //fopen - função para abrir arquivos
                //r = modo de abertura do arquivo , nesse caso é só para leitura
                //para leitura e escrever seria r+


                //Vai contar a quantidade de caracateres que há dentro do arquivo
                while((lendoConteudo = fgetc(chamaArquivo)) != EOF){
                    contador ++;
                }
                //Se caso possuir um caracter ou mais, quer dizer que já existe o arquivo
                if(contador >= 1){
                        printf("Esse nome já existe!!\nDigite outro nome para o arquivo: ");
                        scanf(" %s", nomeArquivo);
                        system("cls");
                }
                    else{
                        verificar = 0;
                        break;
                    }
                contador = 0;  //Zerando o contador
            }while(verificar == 1);


            novoArquivo = fopen(nomeArquivo, "a");
            //fopen = funçao que retorna um ponteiro para o arquivo
            //nesse caso, o ponteiro é armazenado na variavel novoArquivo
            //a é o modo de abertura do arquivo, indica que o arquivo
            //sera aberto apenas para add dados ao final do arquivo

            printf("Novo arquivo criado com sucesso: %s!!\n", nomeArquivo);

            fclose(novoArquivo);
            //fecha o arquivo, liberando os recursos do sistema
        }
        else if(toupper(opcao)=='N'){
            verificar = 0;
        }
        else{
            printf("Escolha inválida, digite novamente!!\n");
        }
        system("pause");
        system("cls");
    }while(verificar == 1);



//PARA ABRIR ARQUIVO
        printf("Deseja ABRIR algum arquivo? (S/N)\n");
        opcao = getche();
        printf("\n\n");

    do{
        if(toupper(opcao)=='S'){
            printf("Digite o nome do arquivo para abrir: ");
            scanf(" %s", ArquivoNome);

            chamaArquivo = fopen(ArquivoNome, "r");

            if(chamaArquivo == NULL){
                printf("O arquivo não existe ou não pode ser aberto..\n\n");
            }
            else{
                printf("Conteúdo: \n");
                while((lendoConteudo = fgetc(chamaArquivo)) != EOF){
                    putchar(lendoConteudo);
                }
                //define um loop que le um caractere por vez do
                //arquivo chamaArquivo usando a função fgetc
                //EOF = End Of File
                //se EOF for verdadeiro significa que o arquivo foi completamente
                //lido e o loop terminara
                //fgetc = le um unico caractere de um arquivo aberto em modo de leitura(r)
                //putchar = escreve o caractere lido no terminal

                fclose(chamaArquivo);
                //fecha o arquivo chamaArquivo
                printf("\n\n");
            }
        }

        else if(toupper(opcao)=='N'){
            verificar = 0;
        }

        else{
            printf("Escolha inválida, digite novamente!!\n");
        }
        system("pause");
        system("cls");
        printf("ABRIR outro arquivo? (S/N)\n");
        opcao = getche();
        printf("\n\n");
    }while(verificar == 1);



    return 0;
}
