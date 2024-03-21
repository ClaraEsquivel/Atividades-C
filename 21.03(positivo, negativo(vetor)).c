//crie um algoritmo que preencha um vetor com 10 n�meros reias,
//calcule e mostre a quantidade de n�meros negativos e a soma
//dos n�meros positivos desse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define TAM 10

int main(){
	setlocale(LC_ALL, "");
	int numeros[TAM], soma = 0;
	int i, contador = 0;
	
	for(i = 0; i < TAM; i++){
		printf("%i� n�mero: ", i + 1);
		scanf("%i", &numeros[i]);
		
		if(numeros[i] > 0){
	 		soma += numeros[i];
		 }
		 if(numeros[i] < 0){
		 	contador++;
		 }
	}
	 printf("\n Soma dos n�meros positivos: %i", soma);
	 printf("\n Quantidade de n�meros negativos: %i", contador);

	
	return 0;
}
