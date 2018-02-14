#include <stdio.h>

int main(){

    printf("EXERCICIO 18 \n");
    int n, m, i, j;

    printf("\nTamanho do primeiro vetor:\t");
    scanf("%d", &n);
    printf("\nTamanho do segundo vetor:\t");
    scanf("%d", &m);

    int vetor1[n];
    int vetor2[m];

    printf("\nDigite os %d valores do primeiro vetor:", n);
    for(i = 0; i < n; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os %d valores do segundo vetor:", m);
    for(i = 0; i < m; i++){
        scanf("%d", &vetor2[i]);
    }

    int vetor3[m + n];
    i = 0;
    j = 0;
    int value, k = 0;

    while(k < m + n){
        if(i == n){
            vetor3[k] = vetor2[j];
            j++;
        }else if(j == m){
            vetor3[k] = vetor1[i];
            i++;
        }else if(vetor1[i] < vetor2[j]){
            vetor3[k] = vetor1[i];
            i++;
        }else{
            vetor3[k] = vetor2[j];
            j++;
        }
        k++;
    }

    printf("\nVetor resultante ordenado:\n", n);
    for(i = 0; i < m + n; i++){
        printf("%d ", vetor3[i]);
    }

    return 0;

}

