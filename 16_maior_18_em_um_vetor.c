#include <stdio.h>
/*1 - Fa�a um programa em C que receba a idade de 10 pessoas e 
mostre quantas s�o maiores que 18 anos*/
int main(){
    
    int idade[10], i, contIdade = 0;
    for (i = 0; i < 3; i++){
        
        printf("\n%i|Digite uma idade: ", i);
        scanf("%i", &idade[i]);
        
        if(idade[i] >= 18){
            contIdade++;
        }
    }
    printf("Maiores de idade: %i", contIdade);
    printf("\nIdade 1: %i", idade[0]);
    
return 0;    
}
