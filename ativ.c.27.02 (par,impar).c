#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	
	printf ("Digite um n�mero: ");
	scanf ("%i", &numero);
	
	if (numero % 2 == 0) { //if = se // % te d� como resposta
	 					// o resto da divis�o de dois numero
		print("N�mero par.");
	} 
	else { //else = se n�o
		printf("N�mero impar.");
	}
	
	return 0;
}
