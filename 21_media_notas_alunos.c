#include <stdio.h>
/*Q3 - Escreva um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
  Em seguida, atrav�s de um la�o while, pede ao usu�rio para que entre com as 
  notas de todos os alunos da sala, um por vez. Por fim, o programa deve mostrar 
  a m�dia, aritm�tica, da turma.*/
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
