#include <stdio.h>

int calcEnesimoTermo(int primeiroTermo, int razao, int n);

int calcSomaNTermos(int primeiroTermo, int razao, int n);

int main(){
    printf("EXERCICIO 4 \n");
    int primeiroTermo, razao, n;

    printf("\nDigite o primeiro Termo: \t");
    scanf("%d", &primeiroTermo);
    printf("\nDigite a razao: \t");
    scanf("%d", &razao);
    printf("\nQual termo quer calcular?: \t");
    scanf("%d", &n);

    int nesimoTermo = calcEnesimoTermo(primeiroTermo, razao, n);
    int somaNTermos = calcSomaNTermos(primeiroTermo, razao, nesimoTermo);

    printf("\nEnesimo Termo: %d", nesimoTermo);
    printf("\nSoma dos N primeiros termos: %d", somaNTermos);

}

int calcEnesimoTermo(int primeiroTermo, int razao, int n){
    return primeiroTermo + razao * (n - 1);
}

int calcSomaNTermos(int primeiroTermo, int razao, int nesimoTermo){
    int i, somaNTermos = 0;
    for(i = primeiroTermo; i <= nesimoTermo; i+= razao){
        somaNTermos += i;
    }
    return somaNTermos;
}

