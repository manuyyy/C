#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

//para salvar string utilizamos  char 'variavel'[]
    char senha[]= "senha", tentativaSenha[20], usuario[]="nome", tentativaNome[20];
    int loginLoop=1;


/*login
    usuario= nome
    senha = senha
*/

    do{
        printf("Usuário: ");
        scanf("%s", tentativaNome);//registra a tentativa

        printf("Senha: ");
        scanf("%s", tentativaSenha);//registra a tentativa
            //strcmp compara duas strings
        if(strcmp (tentativaNome, usuario)== 0 && strcmp (tentativaSenha, senha)== 0)//se a tentativa voltar falsa
        {
            break;//para
        }
        else
        {
            system("cls"); //limpa tela
            printf("Senha incorreta, tente novamente\n");

        }
    }
    while(loginLoop==1);//mostra senha invalida,
            //e retorna até senha  e usuario == 1

    //caso senha e user seja verdadeiro (1)...
    printf("\n****Acesso autorizado****\n");
    printf("\nPressione enter para continuar\n");
    system ("pause");

    system("cls");

    return 0;
}
