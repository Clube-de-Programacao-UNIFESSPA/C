#include <stdio.h>
//Q5 lista1 prova1
int main(){
    
    float valorProduto, valorVenda;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    
    if (valorProduto < 20){
        valorVenda = valorProduto*1.45;
        printf("o valor de venda eh: %.2f", valorVenda);
    } else {
        valorVenda = (valorProduto*0.3) + valorProduto;
        printf("o valor de de venda eh: %.2f", valorVenda); 
    }    
return 0;    
}
