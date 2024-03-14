//fa�a um algoritmo que leia uma quantidade n�o determinada 
//de numeros inteiros positivos. Calcule:

//a quantidade de numeros pares e impares
//a media dos valores pares
//a media geral dos n�meros

//o n�mero que encerrar� a leitura ser� o 0

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, somaGeral = 0, pares = 0, impares = 0, somaPares,
	contador = 0;
	float mediaGeral, mediaPares;
	
	printf("Informe um n�mero:  \n");
	scanf("%i", &numero);
	
	while ( numero != 0){
		if (numero > 0){
		  contador ++;
		  somaGeral += numero;
		
		if(numero % 2 == 0){
			pares++;
			somaPares += numero;
	 		} else {
			impares++;
			}
		} 		
			printf("Informe um n�mero:  \n");
			scanf("%i", &numero);
		
	}
	
	if (contador == 0){
		printf(" N�o foi informado um n�mero positivo.");
	} else {
		mediaPares = somaPares / (float) pares;
		mediaGeral = somaGeral / (float) contador;
	}
	
	printf("\n Quantidade de n�meros �mpares: %.1i ",impares);
	printf("\n Quantidade de n�meros pares: %.1i", pares);
	printf("\n M�dia dos valores pares: %.1f ", mediaPares);
	printf("\n M�dia geral dos n�meros: %.1f  ",mediaGeral);
	
	return 0;
}
