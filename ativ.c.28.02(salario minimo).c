//Fa�a um algoritmo que solicite do usu�rio o valor do
//sal�rio de um usu�rio, calcule quantos sal�rios
//m�nimos esse usu�rio ganha e imprima na tela o resultado.
//(Base para o sal�rio m�nimo R$ 1.412,00).

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system ("cls || clear");
}

int main(){
	 
	float salarioMinimo, salarioUsuario, quantidadeSalarioMinimo;
	
    cabecalho();
	printf("Informe o valor do salario minimo atual: R$");
	scanf("%f" , &salarioMinimo);
	
	cabecalho();
	printf("Digite o valor do seu salario: R$");
	scanf("%f" , &salarioUsuario);
	
	quantidadeSalarioMinimo = salarioUsuario / salarioMinimo;
	
	printf("O usu�rio recebe um sal�rio de R$ %.1f \n", salarioUsuario);
	printf("Recebe cerca de %.1f salarios minimos \n", quantidadeSalarioMinimo);
	
	return 0;
}

