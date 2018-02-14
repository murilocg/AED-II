#include <stdio.h>

int calcSomaDosDigitos(int numero);

int calcProdutoDosDigitos(int numero);

int main(){
    printf("EXERCICIO 9 \n");
    int numero;

    printf("\nDigite um numero: \t");
    scanf("%d", &numero);

    int soma = calcSomaDosDigitos(numero);
    int produto = calcProdutoDosDigitos(numero);

    printf("\nSoma dos digitos: %d", soma);
    printf("\nProduto dos digitos: %d", produto);
}

int calcSomaDosDigitos(int numero){
    int soma = 0;
    while(numero > 0){
        int digito = numero % 10;
        soma += digito;
        numero = (numero - digito) / 10;
    }
    return soma;
}
int calcProdutoDosDigitos(int numero){
    int produto = 1;
    while(numero > 0){
        int digito = numero % 10;
        produto *= digito;
        numero = (numero - digito) / 10;
    }
    return produto;
}


