#include <stdio.h>


int main(){
	//variaveis primeiro laco
	int notaAluno=0,faltaAluno=0,dias=0;
	int numeroTotalAlunos=0,numeroReprovodaFalta=0,i=0;
	int notaAlunos[20];
	//variaveis do segundo laco
	int opcao=0;
	int maiorNota=0,menorNota=10,somaTotal=0;
	float mediaNota=0.0,porcetagemFalta=0.0;
	int aux;
	
	
	printf("Quantos dias teve de aula ");
	scanf("%i",&dias);
	
	while(notaAluno != -1){
		printf("Digite a nota final e o numero de faltas do aluno %i ",i);
		scanf("%i %i",&notaAluno,&faltaAluno);
		
	notaAlunos[i]=notaAluno;
	i++;
	
	if( notaAluno >= 0 && notaAluno < 5){
	    printf("Aluno:INS\n");
	}else if(notaAluno >= 5 && notaAluno < 7){
	    printf("Aluno:REG\n");
	}
   else if(notaAluno >= 7 && notaAluno < 9){
	    printf("Aluno:BOM\n");
	}else if(notaAluno >= 9 && notaAluno <= 10){
	    printf("Aluno:EXC\n");
	    
	}else if( notaAluno > 10 || notaAluno < 0)
	    printf("Nota incorreta\n");
	    
	    
	if(faltaAluno > dias*0.25){
		printf("Reprovado por falta\n");
		numeroReprovodaFalta++;
	}
	
	
	 
	 
	numeroTotalAlunos++;
		
	}
	
	do{
	printf("\b\b\b\n1 Total de alunos: \n");
	printf("2 Maior nota: \n");
	printf("3 Menor nota: \n");
	printf("4 Media: \n");
	printf("5 Soma das notas: \n");
	printf("6 porcentagem de alunos reprovados por falta\n");
	printf("7 sair\n");
	scanf("%i",&opcao);
		
		switch(opcao){		
			case 1:
				printf("total de alunos e: %i\n",numeroTotalAlunos-1);
				break;			
			case 2:
				
				for(i=0; i<numeroTotalAlunos-1 ;i++){
			        if(notaAlunos[i]>maiorNota)
			        maiorNota=notaAlunos[i];
			        aux=i;
					}
					
				printf("Maior nota e: %i do aluno %i\n",maiorNota,aux);
					
				break;
			case 3:
				aux=0;
				for(i=0; i<numeroTotalAlunos-1 ;i++){
			        if(notaAlunos[i]<menorNota)
			        menorNota=notaAlunos[i];
			        aux=i;
					}
					printf("Menor nota e: %i do aluno %i\n",menorNota,aux);
					
				break;	
			case 4:
				for(i=0;i<numeroTotalAlunos-1;i++){
					somaTotal= somaTotal+notaAlunos[i];
				}
				mediaNota=somaTotal/(numeroTotalAlunos-1);
				printf("Media da turma e: %.2f\n",mediaNota);
					
				break;
			case 5:
				somaTotal=0;
				for(i=0;i<numeroTotalAlunos-1;i++){
					somaTotal= somaTotal+notaAlunos[i];
				}
				printf("soma de todas as notas e: %i",somaTotal);
					
				break;
			case 6:
				porcetagemFalta=numeroReprovodaFalta*100/(numeroTotalAlunos-1);
				printf("%% de alunos reprovado por falta e: %%%.2f",porcetagemFalta);
						
				break;
			default:
				printf("opcao invalida");
				break;
			}
	
	}while(opcao!=7);
	
	
	
	
	return 0;
}
