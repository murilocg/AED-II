#include <stdio.h>

void calcPrimeirosElementosFibonacci(int arr[], int n);

int main(){
    printf("EXERCICIO 13 \n");
    int n, i;

    do{
        printf("\nmostrar sequencia até qual posicao? \t");
        scanf("%d", &n);
    }while(n <= 0);

    int arr[n];

    calcPrimeirosElementosFibonacci(arr, n);

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

 void calcPrimeirosElementosFibonacci(int arr[], int n){

    int i, a = 0, b = 1, aux = 1;

    for(i = 0; i < n; i++){
        arr[i] = aux;
        aux = a + b;
        a = b;
        b = aux;
    }
 }

