#include <stdio.h>
#include <math.h>
int main(){
    
    float raio, perimetro;
    
    printf("Digite o raio da circuferencia ");
    scanf("%f",&raio);
    
    perimetro = 2*M_PI*raio;
    
    printf("Uma circuferencia de raio %.2f tem perimetro de: %.2f",raio,perimetro);
    
    
    
    return 0;
}
