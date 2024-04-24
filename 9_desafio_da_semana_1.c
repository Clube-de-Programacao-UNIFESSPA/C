#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    
    int palpite, numAleatorio;
    
    srand(time(NULL));
    
    numAleatorio = rand()%101;
    
    while(palpite!=numAleatorio){
        
        printf("\nDigite um palpite\n ");
        scanf("%d",&palpite);
        
        
        if(sqrt(pow((palpite-numAleatorio),2)) <10 && palpite<numAleatorio )
            printf("Quaseee! digite um numero maior\n ");
        else if(sqrt(pow((palpite-numAleatorio),2))<10 && palpite>numAleatorio )
            printf("Quaseee! digite um numero menor\n ");
        else if(palpite<numAleatorio)
            printf("Digite um numero maior ");
        else if(palpite>numAleatorio)
            printf("Digite um numero menor\n");
        else
            printf("Parabens voce acertou!!!!");
    }
    return 0;
}
