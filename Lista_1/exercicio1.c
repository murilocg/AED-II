#include <stdio.h>

float calcSoma(float numeros[], int n);

int main(){
    printf("EXERCICIO 1\n");
    int n, i;
    do{
        printf("\nDigite o valor de n(numero de elementos):\t");
        scanf("%d", &n);
    }while(n < 0);

    float numeros[n];

    for(i = 0; i < n; i++){
        printf("%d.Digite um numero:\t", (i + 1));
        scanf("%f", &numeros[i]);
    }

    float soma = calcSoma(numeros, n);
    printf("Soma: %f\n", soma);
    printf("Média: %f\n", soma * 1.0 / n);

}

float calcSoma(float numeros[], int n){
    int i;
    float soma = 0;

    for(i = 0; i < n ; i++){
        soma += numeros[i];
    }

    return soma;
}
