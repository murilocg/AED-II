#include <stdio.h>

int main(){
    printf("\nEXERCICIO 1");
    printf("\nTEST 1");
    test(2, 3, 8);
    printf("\nTEST 2");
    test(2, 0, 1);
    printf("\nTEST 3");
    test(-2, 3, -8);
    printf("\nTEST 4");
    test(8, 1, 8);
}

int test(int base, int expoente, int potencia){
    int p = pot(base, expoente);
    if(p == potencia){
        printf("\n PASSOU NO TEST");
    }else{
        printf("\n FALHOU NO TEST");
    }
    printf(" Base: %d Expoente: %d Valor Esperado: %d Resultado: %d", base, expoente, potencia, p);
}

int pot(int x, int n){
    if(n == 0){
        return 1;
    }else if(n % 2 == 0){
        return pot(x, n / 2) * pot(x, n / 2);
    }else{
        return x * pot(x, n / 2) * pot(x, n / 2);
    }
}
