#include <stdio.h>
//Q3 lista1 prova1
int main(){
    
    float altura, peso;
    char sexo; 
    
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite 'm' para masculino ou 'f' para feminino: ");
    scanf(" %c", &sexo);
    
    if (sexo == 'm'){
        peso = (72.7*altura) - 58;
        printf("O seu peso ideal eh: %f", peso);
    } else if (sexo == 'f'){
        peso = (62.1*altura) - 44.7;
        printf("O seu peso ideal eh: %.2f", peso);
    } else {
        printf("opcao INVALIDA!!");
    }
    
return 0;    
}
