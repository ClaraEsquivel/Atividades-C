/*Quest�o 2

Construa um algoritmo que calcule a m�dia aritm�tica de v�rios
n�meros inteiros positivos, inseridos pelo usu�rio.

O final da leitura acontecer� quando for lido um n�mero negativo.

Mostre a m�dia aritm�tica dos n�meros informados pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero; 
	float soma = 0, media = 0, contador;
	
	do{
		printf("Digite um n�mero: ");
		scanf("%i", &numero);
		
	contador++;

	
	} while (numero > 0);
	
	soma =+ numero;
	media = soma / contador;
	
	printf("a m�dia �: %.1f", media);
	
	
	
	return 0;
}
