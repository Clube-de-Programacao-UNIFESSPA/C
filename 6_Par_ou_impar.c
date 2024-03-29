#include <stdio.h>


int main(){
    
    int numero;
    
    
    while(numero!=-1){
    
    printf("\nDigite um numero ");
    scanf("%i",&numero);

    if(numero%2==0)
        printf("Numero e par\n");
    else
        printf("Numero e impar\n");
}
    

    
    return 0;
}
