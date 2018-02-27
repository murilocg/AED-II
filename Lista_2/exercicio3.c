#include <stdio.h>

int contains(int A[], int n, int x);

void containsTest();

void printResultadoTestContains(int idTest, int A[], int n, int x, int re, int ro);


int main(){
    containsTest();
}

int contains(int A[], int n, int x){
    if(n == 0)
        return 0;
    else if(A[n - 1] == x)
        return 1;
    else if(n == 1)
        return 0;
    return contains(A, n - 1, x);
}

void containsTest(){
    printf("\nExecutando Tests: containsTest");
    int A[] = {1, 2, 3, 4};
    int n = 4;
    int x = 2;
    int re = 1;
    int ro = contains(A, n, x);
    printResultadoTestContains(1, A, n, x, re, ro);

    int B[] = {-1, 2, -3};
    n = 2;
    x = -1;
    re = 1;
    ro = contains(B, n, x);
    printResultadoTestContains(2, B, n, x, re, ro);

    int C[] = {0, 0};
    n = 2;
    x = 0;
    re = 1;
    ro = contains(C, n, x);
    printResultadoTestContains(3, C, n, x, re, ro);

    int D[] = {1, 1, 1, 1};
    n = 4;
    x = 0;
    re = 0;
    ro = contains(D, n, x);
    printResultadoTestContains(4, D, n, x, re, ro);

    int E[] = {};
    n = 0;
    x = 2;
    re = 0;
    ro = contains(E, n, x);
    printResultadoTestContains(5, E, n, x, re, ro);
}

void printResultadoTestContains(int idTest, int A[], int n, int x, int re, int ro){
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
