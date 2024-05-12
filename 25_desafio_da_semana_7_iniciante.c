#include <stdio.h>
#include <stdlib.h> //rand, srand
#include <time.h>

int main(){

int opcao, quantidade, numAleatorio, i;

srand(time(NULL)); // inicializa o gerador de numeros aleatorios
do {
printf("\n\n\t\t==== TIPOS DE DADOS ====\n");
printf("\t\t  2  - Moeda - 2 lados\n");
printf("\t\t  6  - Dado de 6 lados\n");
printf("\t\t  8  - Dado de 8 lados\n");
printf("\t\t  12 - Dado de 12 lados\n");
printf("\t\t  20 - Dado de 20 lados\n");
printf("\t\t  0  - Sair do Programa\n");
printf("\t\t========================\n");

printf("\nEscolha a quantidade de lados do dado: ");
scanf("%i", &opcao);

switch(opcao){

case 2:
printf("\nQuantas moedas deseja jogar?: ");
scanf("%i", &quantidade);

for (i = 1; i <= quantidade; i++){
numAleatorio = (rand()%2) + 1; // 1 a 2

if (numAleatorio == 1){
printf("\n%i| Voce tirou 'Cara'", i);
} else {
printf("\n%i| Voce tirou 'Coroa'", i);
}

}
break;

case 6:
printf("\nQuantos dados deseja jogar?: ");
scanf("%i", &quantidade); //se quantidade = 3

/*inicial; condição parada; incremento*/


for (i = 1; i <= quantidade; i++){ //i +1
numAleatorio = (rand()%6) + 1; 
printf("\n%i| Voce tirou o numero: %i", i, numAleatorio); 
}

break;
case 8:
printf("\nQuantos dados deseja jogar?: ");
scanf("%i", &quantidade); 

/*inicial; condição parada; incremento*/
for (i = 1; i <= quantidade; i++){
numAleatorio = (rand()%8) + 1; // 1 a 8
printf("\n%i| Voce tirou o numero: %i", i, numAleatorio); 
}
break;
case 12:
printf("\nQuantos dados deseja jogar?: ");
scanf("%i", &quantidade); 

/*inicial; condição parada; incremento*/
for (i = 1; i <= quantidade; i++){
numAleatorio = (rand()%12) + 1; // 1 a 12
printf("\n%i| Voce tirou o numero: %i", i, numAleatorio); 
}
break;
case 20:
printf("\nQuantos dados deseja jogar?: ");
scanf("%i", &quantidade); 

/*inicial; condição parada; incremento*/
for (i = 1; i <= quantidade; i++){
numAleatorio = (rand()%20) + 1; // 1 a 20
printf("\n%i| Voce tirou o numero: %i", i, numAleatorio); 
}
break;
case 0:

break;
default:
printf("\n\t\t --- Opcao INVALIDA ----\n");
}

} while (opcao != 0);

return 0;
}
