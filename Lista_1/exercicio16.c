#include <stdio.h>

int main(){
    printf("EXERCICIO 16 \n");
    int m, n, i, j;

    printf("\nQuantidade de linhas:\t");
    scanf("%d", &m);
    printf("\nQuantidade de colunas:\t");
    scanf("%d", &n);

    int matrix[n][m];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrix[j][i]);
        }
    }

    int i_maior, j_maior, i_menor, j_menor;

    i_maior = 0;
    j_maior = 0;
    i_menor = 0;
    j_menor = 0;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(matrix[j][i] > matrix[j_maior][i_maior]){
                j_maior = j;
                i_maior = i;
            }

            if(matrix[j][i] < matrix[j_menor][i_menor]){
                j_menor = j;
                i_menor = i;
            }
        }
    }

    printf("\nMaior Elemento: %d", matrix[j_maior][i_maior]);
    printf("\nMenor Elemento: %d", matrix[j_menor][i_menor]);

    return 0;
}




