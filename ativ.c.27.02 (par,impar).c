#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	
	printf ("Digite um número: ");
	scanf ("%i", &numero);
	
	if (numero % 2 == 0) { //if = se // % te dá como resposta
	 					// o resto da divisão de dois numero
		print("Número par.");
	} 
	else { //else = se não
		printf("Número impar.");
	}
	
	return 0;
}
