#include <stdio.h>

float calcSomaQuadratica(float numeros[], int n);

int main(){
    printf("EXERCICIO 3 \n");
    int n, i;
    do{
        printf("\nDigite o valor de n: \t");
        scanf("%d", &n);
    }while(n < 0);

    float numeros[n];
    for(i = 0; i < n; i++){
        printf("%d.Digite um numero:\t", (i + 1));
        scanf("%f", &numeros[i]);
    }

    float somaQuadratica = calcSomaQuadratica(numeros, n);

    printf("\nSoma Quadratica: %f", somaQuadratica);
}

float calcSomaQuadratica(float numeros[], int n){
    int i;
    float somaQuadratica = 0;
    for(i = 0; i < n; i++){
        somaQuadratica += numeros[i] * numeros[i];
    }
    return somaQuadratica;
}
