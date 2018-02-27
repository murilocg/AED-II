#include <stdio.h>

// 2A
void printVetorAsc(int A[], int n);
void printVetorAscTest();

// 2B
void printVetorDesc(int A[], int n);
void printVetorDescTest();

// 2C
int calcSoma(int A[], int n);
void calcSomaTest();
void printResultadoTestSoma(int idTest, int A[], int n, int re, int ro);

// 2D
float calcMedia(int A[], int n);
void calcMediaTest();
void printResultadoTestMedia(int idTest, int A[], int n, float re, float ro);

int main(){
    printVetorAscTest();
    printVetorDescTest();
    calcSomaTest();
    calcMediaTest();
}

void printVetorAsc(int A[], int n){
    if(n > 1)
        printVetorAsc(A, n - 1);
    if(n > 0)
        printf("%d ", A[n - 1]);
    else
        printf("VETOR VAZIO");
}

void printVetorAscTest(){
    printf("\n Executando Tests: printVetorAsc");
    int A[] = {1, 2, 3};
    printVetorAsc(A, 3);
    printf("\n");

    int B[] = {1};
    printVetorAsc(B, 1);
    printf("\n");

    int C[] = {};
    printVetorAsc(C, 0);
    printf("\n");
}

void printVetorDesc(int A[], int n){
    if(n > 0)
        printf("%d ", A[n - 1]);
    else
        printf("VETOR VAZIO");
    if(n > 1)
        printVetorDesc(A, n - 1);
}

void printVetorDescTest(){
    printf("\n Executando Tests: printVetorDesc");
    int A[] = {1, 2, 3};
    printVetorDesc(A, 3);
    printf("\n");

    int B[] = {1};
    printVetorDesc(B, 1);
    printf("\n");

    int C[] = {};
    printVetorDesc(C, 0);
    printf("\n");
}

int calcSoma(int A[], int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return A[0];
    else
        return A[n-1] + calcSoma(A, n - 1);
}

void calcSomaTest(){
    printf("\nExecutando Tests: calcSoma");
    int A[] = {1, 2, 3};
    int n = 3;
    int re = 6;
    printResultadoTestSoma(1, A, n, re, calcSoma(A, n));

    int B[] = {1};
    n = 1;
    re = 1;
    printResultadoTestSoma(2, B, n, re, calcSoma(B, n));

    int C[] = {};
    n = 0;
    re = 0;
    printResultadoTestSoma(3, C, n, re, calcSoma(C, n));
}

void printResultadoTestSoma(int idTest, int A[], int n, int re, int ro){
    if(re == ro)
        printf("\nPASSOU NO TEST %d", idTest);
    else
        printf("\nFALHOU NO TEST %d", idTest);
    printf("\nA = [");
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("], n = %d, RE = %d, RO = %d", n, re, ro);
}

float calcMedia(int A[], int n){
    if(n == 0)
        return 0.0;
    else if(n == 1)
        return A[0] * 1.0;
    else
        return (A[n - 1] + (n - 1) * calcMedia(A, n - 1)) / n;
}

void calcMediaTest(){
    printf("\nExecutando Tests: calcMediaTest");
    int A[] = {1, 2, 3, 4};
    int n = 4;
    float re = 2.5;
    printResultadoTestMedia(1, A, n, re, calcMedia(A, n));

    int B[] = {1};
    n = 1;
    re = 1;
    printResultadoTestMedia(2, B, n, re, calcMedia(B, n));

    int C[] = {};
    n = 0;
    re = 0;
    printResultadoTestMedia(3, C, n, re, calcMedia(C, n));
}

void printResultadoTestMedia(int idTest, int A[], int n, float re, float ro){
if(re == ro)
        printf("\nPASSOU NO TEST %d", idTest);
    else
        printf("\nFALHOU NO TEST %d", idTest);
    printf("\nA = [");
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("], n = %d, RE = %.2f, RO = %.2f", n, re, ro);
}
