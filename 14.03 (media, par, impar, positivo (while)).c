//faça um algoritmo que leia uma quantidade não determinada 
//de numeros inteiros positivos. Calcule:

//a quantidade de numeros pares e impares
//a media dos valores pares
//a media geral dos números

//o número que encerrará a leitura será o 0

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, somaGeral = 0, pares = 0, impares = 0, somaPares,
	contador = 0;
	float mediaGeral, mediaPares;
	
	printf("Informe um número:  \n");
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
			printf("Informe um número:  \n");
			scanf("%i", &numero);
		
	}
	
	if (contador == 0){
		printf(" Não foi informado um número positivo.");
	} else {
		mediaPares = somaPares / (float) pares;
		mediaGeral = somaGeral / (float) contador;
	}
	
	printf("\n Quantidade de números ímpares: %.1i ",impares);
	printf("\n Quantidade de números pares: %.1i", pares);
	printf("\n Média dos valores pares: %.1f ", mediaPares);
	printf("\n Média geral dos números: %.1f  ",mediaGeral);
	
	return 0;
}
