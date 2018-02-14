#include <stdio.h>
#include <math.h>

void determinarNumerosPrimos(int arr[], int n);

int main(){
    printf("EXERCICIO 11 \n");
    int n, i;
    printf("\nDigite um numero: \t");
    scanf("%d", &n);

    int arr[n];

    determinarNumerosPrimos(arr, n);

    for(i = 1; i < n; i++){
        if(arr[i] == 1)
            printf("%d ", i + 1);
    }

    return 0;
}

void determinarNumerosPrimos(int arr[], int n){
    int i, j;

    for(i = 0; i < n; i++){
        arr[i] = 1;
    }
    double limit = sqrt(n);

    for(i = 1; i <= limit; i++){
        for(j = i + 1; j < n; j++){
            if(arr[j] == 1 && (j + 1) % (i + 1) == 0){
                arr[j] = 0;
            }
        }
    }
}

