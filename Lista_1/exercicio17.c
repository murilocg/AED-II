#include <stdio.h>

int main(){
    printf("EXERCICIO 17 \n");
    int m, i, j;

    printf("\nMatriz Quadrada de ordem:\t");
    scanf("%d", &m);

    int matrix[m][m];

    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int soma = 0;

    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            if(i == j){
                soma += matrix[i][j];
            }else if(i + j == m - 1){
                soma += matrix[i][j];
            }
        }
    }

    printf("\nSoma das diagonais: %d", soma);

    return 0;
}
