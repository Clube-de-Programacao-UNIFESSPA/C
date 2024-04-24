#include <stdio.h>

int main(){
    
    float grauC, grauF;
    
    printf("Digite o grau em celsius ");
    scanf("%f",&grauC);
    
    grauF = 1.8*grauC+32;
    
    printf("\n%.2f graus celsius em fahrenheit e: %.2f",grauC,grauF);
    
    
    
    return 0;
}
