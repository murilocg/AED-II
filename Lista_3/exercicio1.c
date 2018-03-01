#include <stdlib.h>
#include <stdio.h>

void lerElementos(int *arr, int n);

int main(){
    int n;
    do{
        printf("Digite o tamanho de n: ");
        scanf("%d", &n);
    }while(n <= 0);

    int *arr = (int*)calloc(n, sizeof(int));
    if(arr == NULL){
        printf("Mémoria insuficiente");
        exit(0);
    }
    lerElementos(arr, n);
    printf("\n");
    int i;
    for(i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    free(arr);
}

void lerElementos(int *arr, int n){
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
