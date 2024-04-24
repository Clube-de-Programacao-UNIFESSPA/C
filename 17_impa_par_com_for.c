#include <stdio.h>
/*2 - Faça um programa em C que exiba na tela os 
números ímpares entre 100 e 300.*/
int main(){
    
    int contador;
    //inicializacao; condição; incremento
    for (contador = 100; contador < 300; contador++){
        
        if (contador % 2 != 0){
            printf("%i ", contador);
        }    
            
    }
        
return 0;    
}
