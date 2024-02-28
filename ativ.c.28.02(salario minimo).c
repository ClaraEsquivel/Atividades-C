//Faça um algoritmo que solicite do usuário o valor do
//salário de um usuário, calcule quantos salários
//mínimos esse usuário ganha e imprima na tela o resultado.
//(Base para o salário mínimo R$ 1.412,00).

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
	
	printf("O usuário recebe um salário de R$ %.1f \n", salarioUsuario);
	printf("Recebe cerca de %.1f salarios minimos \n", quantidadeSalarioMinimo);
	
	return 0;
}

