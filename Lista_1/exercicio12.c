#include <stdio.h>

int caclMDC(int a, int b);

int main(){
    printf("EXERCICIO 12 \n");
    int a, b;

    printf("\nDigite um numero: \t");
    scanf("%d", &a);
    printf("\nDigite outro numero: \t");
    scanf("%d", &b);

    int mdc = caclMDC(a, b);

    printf("\n Maximo Divisor comum entre %d e %d e: %d", a, b, mdc);

    return 0;
}


int caclMDC(int a, int b){
    int aux;
    while(b > 0){
        aux = a;
        a = b;
        b = aux % b;
    }
    return a;
}
