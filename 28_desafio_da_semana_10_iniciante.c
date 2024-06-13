#include <stdio.h>

int main(){
    int numero=0,i=0,j=0;
    int primos[20];    
    do{    
        printf("digite um numero digite -1 pra sair ");
        scanf("%d",&numero);
        
        if(numero<=1)
        printf("nao e numero primo\n");
        else if(numero==2){
        printf("e um numero primo\n");
        primos[j]=numero;
        j++;
    }
        else if(numero%2==0)
        printf("nao e numero primo\n");
        else{
            for(i=3; i<numero;i+=2){
            if(numero%i==0){
                printf("nao e numero primo\n");
                break;    
                }
                else{
                printf("e numero primo\n");
                    primos[j]=numero;
                    j++;
                break;
                }
            }
            
        }    
            
        }while(numero != -1);    
        
        for(i=0;i<=j-1;i++){
            printf("os numeros primo sao: %i \n",primos[i]);
        }
        
        
    
    return 0;
}
