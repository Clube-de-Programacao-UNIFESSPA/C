#include <stdio.h>
/*Escreva um programa que apresente quatro opções: 
(a) consulta saldo, (b) saque e (c) depósito e (d) sair. 
O saldo deve iniciar em R$ 0,00. A cada saque ou depósito 
o valor do saldo deve ser atualizado*/
int main(){
    
    char opcao;
    float saldo = 0, valor;
    
    do {
        printf("\n\n(a)Consulta saldo");
        printf("\n(b)saque");
        printf("\n(c)deposito");
        printf("\n(d)Sair");
    
        printf("\nDigite uma opcao acima [a, b, c ou d]: ");
        scanf(" %c", &opcao);
        
        if (opcao == 'a'){
            printf("Saldo:  %f", saldo);
        } else if (opcao == 'b'){
            printf("Digite o valor que deseja sacar: ");
            scanf("%f", &valor);
            
            if (valor > saldo){
                printf("\nSaldo insuficiente!");
            } else {
                saldo = saldo - valor;
                printf("Valor retirado com sucesso!");
            }
            
        } else if (opcao == 'c'){
            printf("Digite o valor que deseja depositar: ");
            scanf("%f", &valor);
            
            saldo = saldo + valor;
            printf("Valor depositado com sucesso!");
        } else if (opcao == 'd') {
            printf("\n\t --- Programa encerrado! ----\n");
        } else {
            printf("\nOpcao INVALIDA!");
        }
        
    } while (opcao != 'd');
    
return 0;    
}
