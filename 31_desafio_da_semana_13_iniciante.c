//Desafio da Semana #013 - Iniciante
#include <stdio.h>

int main(){
    
    int numeros[5] = {0, 1, 0, 3, 12};
    int aux[5], i, j = 0;
    
    for (i = 0; i < 5; i++){
        if (numeros[i] != 0 ){
            aux[j] = numeros[i];
            j++; 
        }
        
    } //1 | 3| 12 | 0 | 0
    
    while (j < 5){
        aux[j++] = 0;
    }
    
    for (i = 0; i < 5; i++){
        printf("%i ", aux[i]);
    }    
return 0;    
}
