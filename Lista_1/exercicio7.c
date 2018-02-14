#include <stdio.h>

int calcFatorial(int n);

int main(){
    printf("EXERCICIO 7 \n");
    int n;

    printf("\nCalcular Fatorial de quanto?: \t");
    scanf("%d", &n);
    int fatorial = calcFatorial(n);

    printf("\nFatorial de %d: %d", n, fatorial);
}

int calcFatorial(int n){
    int i, fatorial = 1;
    for(i = 2; i <= n; i++){
        fatorial *= i;
    }
    return fatorial;
}

