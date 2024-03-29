#include <stdio.h>

int main(){
    
    int numero;
    
    printf("Digite um numero  ");
    scanf("%i",&numero);
    
    
    if(numero>0)
        printf("\nNumero e positivo!");
    else if(numero==0)
        printf("\nNumero e igual a 0!");
    else 
        printf("\nNumero e negativo!");
        
    
    
    return 0;
}
