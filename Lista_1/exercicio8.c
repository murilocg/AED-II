
#include <stdio.h>

int calcPotencia(int base, int expoente);

int main(){
    printf("EXERCICIO 8 \n");
    int base, expoente;

    printf("\nDigite a base: \t");
    scanf("%d", &base);
    printf("\nDigite o expoente: \t");
    scanf("%d", &expoente);

    int potencia = calcPotencia(base, expoente);

    printf("\nPotencia de base %d e expoente %d: %d", base, expoente, potencia);
}

int calcPotencia(int base, int expoente){
    int i, potencia = 1;
    for(i = 0; i < expoente; i++){
        potencia *= base;
    }
    return potencia;
}

