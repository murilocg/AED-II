#include <stdio.h>

void buscarMaiorEMenorElemento(int arr[], int n, int index[]);

int main(){
    printf("EXERCICIO 14 \n");
    int n, i;

    do{
        printf("\nQual tamanho do vetor? \t");
        scanf("%d", &n);
    }while(n <= 0);

    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int index[2];
    buscarMaiorEMenorElemento(arr, n, index);

    printf("\nMaior: %d", arr[index[1]]);
    printf("\nMenor: %d", arr[index[0]]);

    return 0;
}

void buscarMaiorEMenorElemento(int arr[], int n, int index[]){
    int i;
    index[0] = 0;
    index[1] = 0;
    for(i = 1; i < n; i++){
        if(arr[index[1]] < arr[i])
            index[1] = i;
        if(arr[index[0]] > arr[i])
            index[0] = i;
    }
}


