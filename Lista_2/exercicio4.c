#include <stdio.h>

int countComparacoes(int A[], int n, int x);

void countComparacoesTest();

void printResultadoTestComparacoes(int idTest, int A[], int n, int x, int re, int ro);


int main(){
    countComparacoesTest();
}

int countComparacoes(int A[], int n, int x){
    if(n == 0)
        return 0;
    if(A[n - 1] == x)
        return 1;
    if(n == 1)
        return 1;
    return 1 + countComparacoes(A, n - 1, x);
}

void countComparacoesTest(){
    printf("\nExecutando Tests: countComparacoes");
    int A[] = {1, 2, 3, 4};
    int n = 4;
    int x = 2;
    int re = 3;
    int ro = countComparacoes(A, n, x);
    printResultadoTestComparacoes(1, A, n, x, re, ro);

    int B[] = {-1, 2, -3};
    n = 3;
    x = -1;
    re = 3;
    ro = countComparacoes(B, n, x);
    printResultadoTestComparacoes(2, B, n, x, re, ro);

    int C[] = {0, 0};
    n = 2;
    x = 0;
    re = 1;
    ro = countComparacoes(C, n, x);
    printResultadoTestComparacoes(3, C, n, x, re, ro);

    int D[] = {1, 1, 1, 1};
    n = 4;
    x = 0;
    re = 4;
    ro = countComparacoes(D, n, x);
    printResultadoTestComparacoes(4, D, n, x, re, ro);

    int E[] = {};
    n = 0;
    x = 2;
    re = 0;
    ro = countComparacoes(E, n, x);
    printResultadoTestComparacoes(5, E, n, x, re, ro);

    int F[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    n = 10;
    x = 1;
    printf("\nMAXIMO DE COMPARACOES: %d", countComparacoes(F, n, x));
    x = 10;
    printf("\nMINIMO DE COMPARACOES: %d", countComparacoes(F, n, x));
}

void printResultadoTestComparacoes(int idTest, int A[], int n, int x, int re, int ro){
    if(re == ro)
        printf("\nPASSOU NO TEST %d", idTest);
    else
        printf("\nFALHOU NO TEST %d", idTest);
    printf("\nA = [");
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("], n = %d, x = %d, RE = %d, RO = %d\n", n, x, re, ro);
}
