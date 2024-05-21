#include <stdio.h>


int main(){
    float valorProduto=0.0,valorFinal=0.0;
    int opcao=0,parcela=0;
    printf("Digite do produto: ");
    scanf("%f",&valorProduto);
    
    
    do{
    printf("1 A vista 15%% de desconto\n");
    printf("2 A vista no credito recebe 10%% de desconto\n");
    printf("3 Parcelado no cartao duas vezes preco sem juros\n");
    printf("4 parcelado no cartao 3 vezes ou mais, preco normal mais juros de 10%%\n");
    printf("5 sair\n");
    scanf("%i",&opcao);
    
    switch(opcao){
        case 1:
            valorFinal = valorProduto*0.85;
            printf("O valor final a vista ficou R$%.2f\n ",valorFinal);
            break;
        case 2:
            valorFinal = valorProduto*0.90;
            printf("O valor final a vista no cartao de credito ficou R$%.2f\n ",valorFinal);
            break;
        case 3:
            printf("O valor do produto final parcelado em duas vezes de R$%.2f e R$%.2f\n",(valorProduto/2),valorProduto);
            break;
        case 4:
            printf("Quantas parcelas ");
            scanf("%i",&parcela);
            valorFinal = valorProduto*1.10;
            printf("\nO valor final parcelado em %i de R$%.2f ficou %.2f\n ",parcela,(valorFinal/parcela),valorFinal);
            break;
        default:
            printf("opcao invalida\n");
            break;
    }
    }while(opcao!=5);
    printf("obrigado volte sempre");
    
    return 0;
}
