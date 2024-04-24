#include <stdio.h>


int main(){
    
    float salario, reajuste;
    
    printf("Digite seu salario ");
    scanf("%f", &salario);
    
    if(salario<=750){
        salario= salario*1.05;
        reajuste=salario + 100;
        printf("Salario reajustado para %.2f",reajuste);
    }else{
        reajuste = salario*1.05;
        printf("Salario reajustado para %.2f",reajuste);
    }

    return 0;
}
