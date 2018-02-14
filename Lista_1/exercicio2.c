#include <stdio.h>

float calcSomaPonderada(float numeros[], int n);

int main(){
    printf("EXERCICIO 2 \n");
    int n, i;
    do{
        printf("\nDigite o valor de n(numero de elementos): \t");
        scanf("%d", &n);
    }while(n < 0);

    float numeros[n];

    for(i = 0; i < n; i++){
       printf("%d.Digite um numero:\t", (i + 1));
        scanf("%f", &numeros[i]);
    }

    float somaPonderada = calcSomaPonderada(numeros, n);

    printf("\nSoma Ponderada: %f", somaPonderada);
}

float calcSomaPonderada(float numeros[], int n){
    int i;
    float somaPonderada = 0;
    for(i = 0; i < n; i++){
        somaPonderada += numeros[i] * (i + 1);
    }
    return somaPonderada;
}
