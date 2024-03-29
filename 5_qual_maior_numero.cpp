#include <stdio.h>

///comparar dois numeros e imprimir qual o maior

int main(){
    
    int numero1, numero2;
    
    printf("Digite o primeiro numero ");
    scanf("%i",&numero1);
    printf("Digite o segundo numero ");
    scanf("%i",&numero2);
    
    
    if(numero1>numero2)
        printf("primeiro numero %i e maior q o segundo %i",numero1,numero2);
    else if(numero1<numero2)
        printf("segundo numero %i e maior que o primeiro %i ",numero2,numero1);
    else 
    printf("segundo numero %i e primeiro %i numero sao iguais ",numero2,numero1);    
    
    
    return 0;
}
