#include <stdlib.h>
#include <stdio.h>

int *alocarMemoria(int n);

void mostrarElementos(int *arr, int n);

void liberarMemoria(int *arr);

int main(){
    int n;
    do{
        printf("Digite o tamanho de n: ");
        scanf("%d", &n);
    }while(n <= 0);

    int *arr = alocarMemoria(n);
    if(arr == NULL){
        exit(0);
    }
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    mostrarElementos(arr, n);
    liberarMemoria(arr);
}

int *alocarMemoria(int n){
    if(n < 1){
        printf("O tamanho minimo de um vetor é 1.");
        return (NULL);
    }
    int *arr = (int*)calloc(n, sizeof(int));

    if(arr == NULL)
        printf("Memoria insuficiente");
    return (arr);
}

void mostrarElementos(int *arr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
}

void liberarMemoria(int *arr){
    if(arr != NULL){
        free(arr);
    }
}
