#include <stdio.h>
/*2 - Fa�a um programa em C que exiba na tela os 
n�meros �mpares entre 100 e 300.*/
int main(){
    
    int contador;
    //inicializacao; condi��o; incremento
    for (contador = 100; contador < 300; contador++){
        
        if (contador % 2 != 0){
            printf("%i ", contador);
        }    
            
    }
        
return 0;    
}
