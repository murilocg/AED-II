#include <stdio.h>

void marcarOcorrencias(int x, int arr[], int ocorrencias[], int n);

int buscarPrimeiraOcorrencia(int ocorrencias[], int n);

int buscarUltimaOcorrencia(int ocorrencias[], int n);

int main(){
    printf("EXERCICIO 15 \n");
    int n, x, i;

    printf("\nQual tamanho do vetor? \t");
    scanf("%d", &n);
    printf("\nVerificar ocorrencias de qual elemento? \t");
    scanf("%d", &x);

    int arr[n];
    int ocorrencias[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    marcarOcorrencias(x, arr, ocorrencias, n);

    int primeiraOcorrencia = buscarPrimeiraOcorrencia(ocorrencias, n);
    int ultimaOcorrencia = buscarUltimaOcorrencia(ocorrencias, n);

    printf("\nPrimeira Ocorrencia: %d", primeiraOcorrencia + 1);
    printf("\nUltima Ocorrencia: %d", ultimaOcorrencia + 1);
     printf("\nTodas Ocorrencias: ");

    for(i = 0; i < n; i++){
        if(ocorrencias[i] == 1)
            printf("%d ", i + 1);
    }

    return 0;
}

int buscarPrimeiraOcorrencia(int ocorrencias[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(ocorrencias[i] == 1)
            return i;
    }
    return -1;
}

int buscarUltimaOcorrencia(int ocorrencias[], int n){
    int i;
    for(i = n - 1; i > -1; i--){
        if(ocorrencias[i] == 1)
            return i;
    }
    return -1;
}

void marcarOcorrencias(int x, int arr[], int ocorrencias[], int n){
    int i;

    for (i = 0; i < n; i++){
        if(arr[i] == x){
            ocorrencias[i] = 1;
        }else{
            ocorrencias[i] = 0;
        }
    }
}


