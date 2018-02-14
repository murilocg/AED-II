#include <stdio.h>

int contarOcorrencias(char text[], int n, char simbolo);

int main(){

    printf("EXERCICIO 6 \n");
    int n;

    char simbolo;
    printf("\n Contar ocorrencias de qual simbolo?");
    scanf("%c", &simbolo);

    printf("\nQual o tamanho do texto? \t");
    scanf("%d", &n);

    char text[n];
    printf("\nDigite o texto: \t");
    scanf("%s", &text);

    int ocorrencias = contarOcorrencias(text, n, simbolo);
    printf("Ocorrencias: %d", ocorrencias);
}



int contarOcorrencias(char text[], int n, char simbolo){
    int i, count = 0;
    for(i = 0; i < n; i++){
        if(text[i] == simbolo){
            count++;
        }
    }
    return count;
}

