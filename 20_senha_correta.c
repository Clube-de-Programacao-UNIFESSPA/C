#include <stdio.h>

//Crie um programa em C que solicite ao usu�rio que digite uma senha num�rica e continua solicitando at� que a senha correta seja inserida.
int main(){
	int senha=1234;
	int tentativa=0;
	do{
	printf("Digite a senha ");
	scanf("%i",&tentativa);
	if(senha!=tentativa){
		printf("senha incorreta\n");
	}
}	while(tentativa!=senha);
	printf("senha correta\n");
	
	return 0;
}
