#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar (int n1, int n2){ 
	int soma;
	soma = n1 + n2;
}


int main(){
	setlocale(LC_ALL, "");
	
	int primeiroNumero, segundoNumero, soma;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%i",&segundoNumero);

	
	printf("\n Soma: %i \n", somar(primeiroNumero, segundoNumero));	
	
	return 0;
}
