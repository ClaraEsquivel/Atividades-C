// Fazer um programa em C que solicita um valor em metros
// e por meio de uma função, retorna o correspondente em
// centímetros

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float metrosParaCentimetros (float numero){
	return numero * 100;
}

int main(){
	setlocale(LC_ALL, "");
	
	float numero, resultado;
	
	printf("Digite um valor em metros:  ");
	scanf("%f" , &numero);
	
	resultado = metrosParaCentimetros(numero);
	 
	printf("Resultado: %.2f centimetros. \n",resultado);
	
	
	return 0;
}
