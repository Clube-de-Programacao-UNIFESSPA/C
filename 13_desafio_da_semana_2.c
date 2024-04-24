#include <stdio.h>
//Desafio da semana #002 - Iniciante
int main(){
    
    float ladoA, ladoB, ladoC;
    
    printf("Digite o valor do primerio lado: ");
    scanf("%f", &ladoA);
    
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &ladoB);
    
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &ladoC);
    
    
    if ( (ladoA + ladoB) < ladoC || (ladoB + ladoC) < ladoA || (ladoA + ladoC) < ladoB ){
        printf("\nO triangulo eh INVALIDO!!");
    } else if (ladoA == ladoB && ladoB == ladoC){
        printf("\nO triangulo eh equilatero!");
    } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        printf("\nO triangulo eh isosceles!");
    } else {
        printf("\nO triangulo eh escaleno!");
    } 
         
return 0;    
}
