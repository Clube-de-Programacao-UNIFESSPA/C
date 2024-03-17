#include <stdio.h>

//programa que soma 2 nuemeros

int main(){
    
    int N1, N2, resultado;
    
    printf("Digite um numero ");
    scanf("%i", &N1);
    
    printf("Digite outro numero ");
    scanf("%i",&N2);
    
    resultado = N1+N2;
    
    printf("\nA soma de %i + %i e igual a: %i",N1,N2,resultado);
    
    
    
return 0;    
}
