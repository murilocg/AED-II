#include <stdio.h>

int ePalindromo(char palavra[], int n, int i);

void ePalindromoTest();

void printResultadoTestPalindromo(int idTest, char palavra[], int n, int re, int ro);

int main(){
    ePalindromoTest();
}

int ePalindromo(char P[], int n, int i){
    if(n == 0 || n == 1)
        return 1;
    else if(i == n / 2)
        return 1;
    else if(P[i] != P[n - 1 - i])
        return 0;
    else
        return ePalindromo(P, n, i + 1);
}

void ePalindromoTest(){
    printf("\nExecutando Tests: ePalindromo");
    char p1[] = "arara";
    int n = 5;
    int re = 1;
    int ro = ePalindromo(p1, n, 0);
    printResultadoTestPalindromo(1, p1, n, re, ro);

    char p2[] = "1221";
    n = 4;
    re = 1;
    ro = ePalindromo(p2, n, 0);
    printResultadoTestPalindromo(2, p2, n, re, ro);

    char p3[] = "reaiver";
    n = 7;
    re = 0;
    ro = ePalindromo(p3, n, 0);
    printResultadoTestPalindromo(3, p3, n, re, ro);

    char p4[] = "a";
    n = 1;
    re = 1;
    ro = ePalindromo(p4, n, 0);
    printResultadoTestPalindromo(4, p4, n, re, ro);

    char p5[] = "";
    n = 0;
    re = 1;
    ro = ePalindromo(p5, n, 0);
    printResultadoTestPalindromo(5, p5, n, re, ro);
}


void printResultadoTestPalindromo(int idTest, char palavra[], int n, int re, int ro){
     if(re == ro)
        printf("\nPASSOU NO TEST %d", idTest);
    else
        printf("\nFALHOU NO TEST %d", idTest);
    printf("\nPalavra = ");
    int i;
    for(i = 0; i < n; i++){
        printf("%c", palavra[i]);
    }
    printf(", n = %d, RE = %d, RO = %d\n", n, re, ro);
}


