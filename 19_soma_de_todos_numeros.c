#include <stdio.h>
/*Q1 - Ler um número inteiro n. Escrever a soma de todos os números 
de 1 até n. (Ex: n = 3; Soma = 1 + 2 + 3 = 6).*/
int main(){
    
    int numero = 3, soma = 0, contador = 1;
    
    while (contador <= numero){
        soma += contador; // soma = soma + contador;  
        contador++; // contador = contador + 1 
    }
    
    printf("Soma: %i", soma);
    
return 0;    
}
