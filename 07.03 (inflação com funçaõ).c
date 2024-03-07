//fazer um programa em C que solicita o pre�o de um produto e 
//inflaciona esse pre�o em 10% se ele for menor que 100 e 
//em 20% se ele for maior ou igual a 100.
//Utilize uma fun��o para obter o resultado solicitado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float inflacionar (float valor){
	float novoValor;
	
	if (valor < 100){
		novoValor = valor * 1.1;
	} else {
		novoValor = valor * 1.2;
    } 
	return novoValor; 
}

int main (){
	setlocale(LC_ALL, "");
	
	float valor , resultado;
	
	printf("Digite o valor do produto:  ");
	scanf("%f", &valor);
	
	resultado = inflacionar(valor);
	
	printf("O resultado com a infla��o �: %.2f \n", resultado);
	
	return 0;
}
