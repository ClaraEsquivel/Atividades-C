#include <stdio.h>

int main(){
	float numero1;
	float numero2; 
	float soma, subtracao, multiplicacao, divisao;
	
	
	printf("Digite o valor do primeiro n�mero :  ");
	scanf ("%f" , &numero1);
	
	printf("Digite o valor do segundo n�mero :  ");
	scanf ("%f" , &numero2);
	
	//Realizando c�lculos
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	
	system("cls || clear"); // || = ou
							// && = e
							
	//Exibindo dados
	 printf("\n===Dados===");
	 printf("Primeiro n�mero: %.1f \n", numero1);
	 printf("Segundo n�mero: %.1f \n", numero2);
	 printf("\nSoma: %.1f \n", soma);
	 printf("Subtra��o: %.1f \n", subtracao);
	 printf("Multiplica��o: %.1f \n", multiplicacao);
	 printf("Divis�o: %.1f \n", divisao);
	
	
	return 0;
}
