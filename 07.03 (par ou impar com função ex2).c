#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar (int numero){
	//opera��o tern�ria.
 numero % 2 == 0 ? printf("\n Par.") : printf("\n �mpar."); 
}
   
int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%i", &numero);
	
	printf("\n= = = RESULTADO = = =\n");
	verificarParOuImpar(numero);
	
	return 0;
}
