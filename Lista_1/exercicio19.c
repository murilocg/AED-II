#include <stdio.h>

int main(){

    printf("EXERCICIO 19 \n");
    int row1, col1, row2, col2, i, j, k;

    do{
        printf("\n Primeira Matriz");
        printf("\nlinhas:\t");
        scanf("%d", &row1);
        printf("\nColunas:\t")
        scanf("%d", &col1);

        printf("\n Segunda Matriz");
        printf("\nlinhas:\t");
        scanf("%d", &row2);
        printf("\nColunas:\t")
        scanf("%d", &col2);

    }while(col1 != row2);

    int matrix1[col1][row1];
    int matrix2[col2][row2];

    printf("\nDigite os valores da primeira matriz?\t");
    for(i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            scanf("%d", &matrix1[j][i]);
        }
    }

    printf("\nDigite os valores da segunda matriz?\t");
    for(i = 0; i < row2; i++){
        for(j = 0; j < col2; j++){
            scanf("%d", &matrix2[j][i]);
        }
    }

    int matrix3[col2][row1];

    printf("\nMultiplicando...");
    for(i = 0; i < row1; i++){

        for(j = 0; j < col2; j++){

            int soma = 0;
            for(k = 0; k < col1; k++){
                soma += matrix1[k][i] * matrix2[j][k];
            }
            matrix3[j][i] = soma;
        }
    }

    printf("\nProduto das Matrizes: \n");
    for(i = 0; i < row1; i++){
        for(j = 0; j < col2; j++){
            printf("%d ", matrix3[j][i]);
        }
        printf("\n");
    }
    return 0;
}



