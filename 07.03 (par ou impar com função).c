#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar (int numero){

	if (numero % 2 == 0)
   	    printf("\n Par.");
   else 
   		printf("\n Ímpar.");
   
}
   
int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número:  ");
	scanf("%i", &numero);
	
	printf("= = = RESULTADO = = =\n");
	verificarParOuImpar(numero);
	
	return 0;
}
