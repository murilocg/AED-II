#include <stdio.h>

float calcSequencia(int n);

void testCalcSequencia();

int main(){
    testCalcSequencia();
}

float calcSequencia(int n){
    float sumSeq;
    if(n < 1){
        sumSeq = 0;
    }else if(n == 1){
        sumSeq = 1;
    }else{
        sumSeq = calcSequencia(n - 1) + (1.0 / n);
    }
    printf(" %f", sumSeq);
    return sumSeq;
}

void testCalcSequencia(){
    printf("\nTEST - calcSequencia\n");
    printf("\nTest com n = 4: ");
    calcSequencia(4);
    printf("\nTest com n = 1: ");
    calcSequencia(1);
    printf("\nTest com n = 0: ");
    calcSequencia(0);
    printf("\nTest com n = -1: ");
    calcSequencia(-1);
}
