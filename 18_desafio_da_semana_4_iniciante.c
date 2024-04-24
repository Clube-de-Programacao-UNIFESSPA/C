#include <stdio.h>
#include <math.h>
//desafio da semana #004 - Iniciante
int main(){

int opcao;
float num1, num2, resultado, a, b, c, delta;

do {
printf("\n\t\t ==== CALCULADORA CIENTIFICA ====\n");
printf("1 - Adicao\n");
printf("2 - Subtracao\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisao\n");
printf("5 - Exponenciacao\n");
printf("6 - Raiz Quadrada\n");
printf("7 - Bhaskara\n");
printf("8 - Sair do programa\n");

printf("Digite o numero correspondente a operacao desejada: ");
scanf("%i", &opcao);


if (opcao == 1){
printf("\nDigite dois numeros para serem somados: ");
scanf("%f %f", &num1, &num2);

resultado = num1+num2;
printf("A soma dos numeros eh: %.2f", resultado);

} else if (opcao == 2){
printf("\nDigite dois numeros para serem subtraidos: ");
scanf("%f %f", &num1, &num2);

resultado = num1-num2;
printf("A subtracao do numero %.2f pelo numero %.2f eh: %.2f", num1, num2, resultado);

} else if (opcao == 3){
printf("Digite dois numeros para serem multiplicados: ");
scanf("%f %f", &num1, &num2);

resultado = num1*num2;
printf("Resultado: %.2f x %.2f = %.2f", num1, num2, resultado);

} else if (opcao == 4){
printf("\nDigite dois numeros para serem divididos: ");
scanf("%f %f", &num1, &num2);

resultado = num1/num2;
printf("Resultado: %.2f / %.2f = %.2f", num1, num2, resultado);

} else if (opcao == 5){
printf("\nDigite um numero base e um numero expoente, respectivamente: ");
scanf("%f %f", &num1, &num2);

resultado = pow(num1, num2);
printf("Resultado: %.2f ^%.2f = %.2f", num1, num2, resultado);

} else if (opcao == 6){
printf("\nDigite um numero para retirar a raiz: ");
scanf("%f", &num1);

if (num1 < 0){
printf("\nNao existe raiz real de numero NEGATIVO!");
} else {
resultado = sqrt(num1);
printf("Resultado: Raiz de %.2f = %.2f", num1, resultado);
}

} else if (opcao == 7){
printf("\nDe acordo com a formula padrao (a)x^2 + (b)x + (c) = 0: ");
printf("Digite o valor do coeficiente (a): ");
scanf("%f", &a);
printf("Digite o valor do coeficiente (b): ");
scanf("%f", &b);
printf("Digite o valor do coeficiente (c): ");
scanf("%f", &c);

delta = pow(b,2) - (4*a*c);

if (delta < 0){
printf("\nA equacao NAO possui raizes reais!\n");
} else {
num1 = (-b + sqrt(delta))/(2*a);
num2 = (-b - sqrt(delta))/(2*a);

printf("\nAs raizes da equcao sao: x1 = %.2f e x2 = %.2f", num1, num2);
}

} else if (opcao == 8){
printf("\n\t\t--- Programa finalizado ---");

} else {
printf("\n\nOpcao INVALIDA!!\n");

}
} while (opcao !=8);

return 0;
}
