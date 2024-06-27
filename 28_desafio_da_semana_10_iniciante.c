#include <stdio.h>
#include <string.h>
#include <ctype.h> // Manipulação de caracteres

int veripali(char str[]) // Função para verificar palíndromo
{
    int start = 0,i;
    int end = strlen(str) - 1;


    //tranformar em minusculo 
    for ( i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
 //verificar se é palindromo ou não 
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() 
{ // int main padrão normal para verificar 
    char palavra[100];

    printf("digite uma palavra para verificar se e palindromo ");
    scanf("%s", palavra);

    if (veripali(palavra)) {
        printf("%s e palindromo.\n", palavra);
    } else {
        printf("%s nao e palindromo.\n", palavra);
    }

    return 0;
}
