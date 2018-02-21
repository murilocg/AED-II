#include <stdio.h>

int F(int n);

int main(){
    int n;

    do{
        printf("\nDigite o valor de n: ");
        scanf("%d", &n);
    }while(n <= 0);

    int f = F(n);
    printf("Resultado: %d", f);
}

int F(int n){
    if(n == 1 || n == 2)
        return n;
    else if(n % 2 > 0)
        return 2 * F(n - 1) + 3 * F(n - 2);
    return 0;
}



