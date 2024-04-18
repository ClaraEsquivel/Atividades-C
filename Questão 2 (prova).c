/*Questão 2

Construa um algoritmo que calcule a média aritmética de vários
números inteiros positivos, inseridos pelo usuário.

O final da leitura acontecerá quando for lido um número negativo.

Mostre a média aritmética dos números informados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero; 
	float soma = 0, media = 0, contador;
	
	do{
		printf("Digite um número: ");
		scanf("%i", &numero);
		
	contador++;

	
	} while (numero > 0);
	
	soma =+ numero;
	media = soma / contador;
	
	printf("a média é: %.1f", media);
	
	
	
	return 0;
}
