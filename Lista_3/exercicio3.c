#include <stdio.h>
#include <stdlib.h>

int **alocarMemoriaMatriz(int m, int n);
void liberarMemoriaMatriz(int **matriz, int m, int n);
void testCicloDeVidaMatriz(int m, int n);
void mostrarMatriz(int **matriz, int m, int n);

int main(){
    testCicloDeVidaMatriz(4, 2);
    testCicloDeVidaMatriz(0, 0);
    testCicloDeVidaMatriz(-1, 2);
    testCicloDeVidaMatriz(5, 4);
}

void testCicloDeVidaMatriz(int m, int n){

    printf("\nTEST => m: %d, n: %d", m, n);
    if(m < 1 || n < 1){
        printf("\nErro: Valor invalido de parametro");
        return;
    }

    int **matriz = alocarMemoriaMatriz(m, n);
    if(matriz == NULL)
        return;

    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            matriz[i][j] = i * j;
        }
    }
    mostrarMatriz(matriz, m, n);
    liberarMemoriaMatriz(matriz, m, n);
}

void mostrarMatriz(int **matriz, int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

int **alocarMemoriaMatriz(int m, int n){

    int **matriz = (int **)calloc(m, sizeof(int*));

    if(matriz == NULL){
        printf("\nMemória insuficiente\n");
        return (NULL);
    }
    int i;

    for(i = 0; i < m; i++){
        matriz[i] = (int*)calloc(n, sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro: Memoria insuficiente");
            return (NULL);
        }
    }
    return (matriz);
}

void liberarMemoriaMatriz(int **matriz, int m, int n){
    if(matriz == NULL || m < 1 || n < 1)
        return;
    int i;
    for(i = 0; i < n; i++){
        if(matriz[i] == NULL)
            return;
        free(matriz[i]);
    }
    free(matriz);
}
