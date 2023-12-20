#include <stdio.h>
#define TAM 3   
#define NOTAS 2
struct dados_alunos
{
    char nome[200];
    float notas[2];
    float media;
};

void media_aluno(struct dados_alunos alunos[])
{
    int contador, coluna;
    float soma_notas = 0;

    for (contador = 0; contador < TAM; contador++)
    {
    for (coluna = 0; coluna < NOTAS; coluna++)
    {
        soma_notas+= alunos[contador].notas[coluna];
    }
    alunos[contador].media = soma_notas / NOTAS;
    soma_notas = 0;
    }
    
}

int main (){

int contador;
int coluna;
    
    for (contador = 0; contador < TAM; contador++)
    {

    for (coluna = 0; coluna < NOTAS; coluna++)
    {

    }
    }

    
}
