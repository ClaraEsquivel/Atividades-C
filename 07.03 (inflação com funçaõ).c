//fazer um programa em C que solicita o preço de um produto e 
//inflaciona esse preço em 10% se ele for menor que 100 e 
//em 20% se ele for maior ou igual a 100.
//Utilize uma função para obter o resultado solicitado.

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
	
	printf("O resultado com a inflação é: %.2f \n", resultado);
	
	return 0;
}
