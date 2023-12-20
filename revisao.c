#include <stdio.h>

struct lista_telefonica
{
    char nome[200];
    char telefone[14];
    char email[50];
};

int main (){

struct lista_telefonica contato[2];
int contador;
    
    for (contador = 0; contador < 2; contador++)
    {
    printf("Informe %dº nome: ", contador + 1);
    gets(contato[contador].nome);
    printf("Informe %dº telefone: ", contador + 1);
    gets(contato[contador].telefone);
    printf("Informe %dº email: ", contador + 1);
    gets(contato[contador].email);
    fflush(stdin);
    }

    for (contador = 0; contador < 2; contador++)
    {
        printf("\nNome: %s \n", contato[contador].nome);
        printf("\nTelefone: %s \n", contato[contador].telefone);
        printf("\nEmail: %s \n", contato[contador].email);
    }
    

    return 0;
}