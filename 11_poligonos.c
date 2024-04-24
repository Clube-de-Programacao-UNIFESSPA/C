#include <stdio.h>
//Q4 lista1 prova1
int main(){
    
    int numLado;
    float medidaLado; 
    
    printf("Digite o numero de lados do poligono: ");
    scanf("%i", &numLado);
    
    printf("Digite a medida do lado: ");
    scanf("%f", &medidaLado);
    
    if (numLado == 3){
        printf("\nTRIANGULO");
        printf("\nO perimetro eh: %f", medidaLado*3);
    } else if (numLado == 4){
        printf("\nQUADRADO");
        printf("\nO valor da area eh: %f", medidaLado*medidaLado);
    } else if (numLado == 5){
        printf("\nPENTAGONO");
    } else {
        printf("\nPoligono nao identificado!");
    }    
return 0;    
}
