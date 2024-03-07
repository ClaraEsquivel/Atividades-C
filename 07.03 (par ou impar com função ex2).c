#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar (int numero){
	//operação ternária.
 numero % 2 == 0 ? printf("\n Par.") : printf("\n Ímpar."); 
}
   
int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	printf("\n= = = RESULTADO = = =\n");
	verificarParOuImpar(numero);
	
	return 0;
}
