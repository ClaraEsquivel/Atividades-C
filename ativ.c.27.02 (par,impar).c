#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	
	printf ("Digite um n�mero: ");
	scanf ("%i",&numero);
	
	if (numero % 2 == 0) { 
		printf("N�mero par.");
	} else {
		printf("N�mero impar.");
	}
	
	//if = se 
	//else = se n�o
	// % te d� como resposta
	// o resto da divis�o de dois numero
	return 0;
}
