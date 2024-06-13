#include <stdio.h>
//desafio da semana #009 - Iniciante
int main(){
    
    int contAlunos = 1;
    float nota1, nota2, media;
    
    do {
        printf("\n ---------- Aluno %i ----------\n", contAlunos);
    
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){
            printf("\nNota INVALIDA! por favor, digite novamente\n");
        } else {
            media = ((nota1*4) + (nota2*6))/10;
            printf("\nMedia do aluno: %.2f", media);
            
            if (media < 5){
                printf("\nConceito: INSUFICIENTE");
                printf("\nReprovado!");
            } else if (media < 7){
                printf("\nConceito: REGULAR");
                printf("\nAprovado!");
            } else if (media < 9){
                printf("\nConceito: BOM");
                printf("\nAprovado!");
            } else {
                printf("\nConceito: EXCELENTE");
                printf("\nAprovado!");
            }
             
            contAlunos++;
        }
        
    } while (contAlunos <= 10);
    
return 0;    
}
