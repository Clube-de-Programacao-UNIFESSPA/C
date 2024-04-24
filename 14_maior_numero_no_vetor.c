#include <stdio.h>


int main(){
    int maior=0,i=0;
    int vetor[5];
    
    for(i=0;i<6;i++){
        printf("Digite um numero para o vetor para a posiao %i ",i);
        scanf("%i",&vetor[i]);
    }
    
    for(i=0;i<6;i++){
        if(vetor[i]>maior)
        maior=vetor[i];
    }
    printf("O maior valor do vetor e %i",maior);
    
    return 0;
}
