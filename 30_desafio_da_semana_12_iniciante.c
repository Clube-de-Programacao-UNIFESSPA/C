//desafio da seamna 12
#include <stdio.h>
#include <string.h>

int main(){
	char mesclado[50];
	char str1[25];
	char str2[25];
	
	int i=0,j=0;
	
	printf("Digite duas palavras ");
	scanf("%s %s",str1,str2);
	
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	for(i=0;i<=len1 || i<=len2;i++){
		if(i<len1)
		mesclado[j++]=str1[i];
		if(i<len2)
		mesclado[j++]=str2[i];
	}
	
	printf("as palavras juntas fica %s",mesclado);

	return 0;
}
