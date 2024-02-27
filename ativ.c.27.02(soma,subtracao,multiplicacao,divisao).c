#include <stdio.h>

int main(){
	float numero1;
	float numero2; 
	float soma, subtracao, multiplicacao, divisao;
	
	
	printf("Digite o valor do primeiro número :  ");
	scanf ("%f" , &numero1);
	
	printf("Digite o valor do segundo número :  ");
	scanf ("%f" , &numero2);
	
	//Realizando cálculos
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	
	system("cls || clear"); // || = ou
							// && = e
							
	//Exibindo dados
	 printf("\n===Dados===");
	 printf("Primeiro número: %.1f \n", numero1);
	 printf("Segundo número: %.1f \n", numero2);
	 printf("\nSoma: %.1f \n", soma);
	 printf("Subtração: %.1f \n", subtracao);
	 printf("Multiplicação: %.1f \n", multiplicacao);
	 printf("Divisão: %.1f \n", divisao);
	
	
	return 0;
}
