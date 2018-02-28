#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nome;
    char *dataDeNascimento;
    char *cpf;
}Pessoa;

void preencherDados(Pessoa *pessoa);

void mostrarDados(Pessoa *pessoa);

int main(){

    Pessoa *pessoa = malloc(sizeof(Pessoa));
    if(pessoa == NULL){
        printf("\nErro: Memoria insuficiente\n");
        exit(0);
    }
    preencherDados(pessoa);
    mostrarDados(pessoa);

    free(pessoa);
}

void preencherDados(Pessoa *pessoa){
    pessoa->nome = (char*)calloc(6, sizeof(char));
    pessoa->dataDeNascimento = (char*)calloc(10, sizeof(char));
    pessoa->cpf = (char*)calloc(11, sizeof(char));
    strcpy(pessoa->nome, "Murilo");
    strcpy(pessoa->dataDeNascimento, "04/05/1995");
    strcpy(pessoa->cpf, "124578910");
}

void mostrarDados(Pessoa *pessoa){
    printf("\nNome: %s", pessoa->nome);
    printf("\nData de Nascimento: %s", pessoa->dataDeNascimento);
    printf("\nCpf: %s", pessoa->cpf);
}
