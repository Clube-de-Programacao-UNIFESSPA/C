#include <stdio.h>
/*Q3 - Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
  Em seguida, através de um laço while, pede ao usuário para que entre com as 
  notas de todos os alunos da sala, um por vez. Por fim, o programa deve mostrar 
  a média, aritmética, da turma.*/
int main(){
    
    int quantAlunos = 0, cont = 0;
    float media, soma = 0, nota;
    
    printf("Digite a quantidade da alunos da turma: ");
    scanf("%i", &quantAlunos);
    
    while(cont < quantAlunos){
        printf("\n%i| Digite a nota do alunos: ", cont);
        scanf("%f", &nota);        
        
        soma = soma + nota;
        
        cont++; // cont = cont + 1            
    }
    media = soma/quantAlunos;
    
    printf("\nSoma: %f", soma);
    printf("\nMedia: %f", media);
    
return 0;    
}
