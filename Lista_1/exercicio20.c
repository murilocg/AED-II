#include <stdio.h>

int verificaSeEPalindrome(char palavra[], int n);

int main(){

    printf("EXERCICIO 20 \n");
    int n;

    printf("\nQual o tamanho do texto? \t");
    scanf("%d", &n);

    char palavra[n];
    printf("\nDigite o texto: \t");
    scanf("%s", &palavra);

    int ePalindrome = verificaSeEPalindrome(palavra, n);
    if(ePalindrome == 0){
        printf("\n A palavra %s nao e Palindrome", palavra);
    }else{
        printf("\n A palavra %s e Palindrome", palavra);
    }
}

int verificaSeEPalindrome(char palavra[], int n){
    int i;
    for(i = 0; i < n/2; i++){
        if(palavra[i] != palavra[n - 1 - i]){
            return 0;
        }
    }
    return 1;
}

