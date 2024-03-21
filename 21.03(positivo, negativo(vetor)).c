//crie um algoritmo que preencha um vetor com 10 números reias,
//calcule e mostre a quantidade de números negativos e a soma
//dos números positivos desse vetor.

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
		printf("%iº número: ", i + 1);
		scanf("%i", &numeros[i]);
		
		if(numeros[i] > 0){
	 		soma += numeros[i];
		 }
		 if(numeros[i] < 0){
		 	contador++;
		 }
	}
	 printf("\n Soma dos números positivos: %i", soma);
	 printf("\n Quantidade de números negativos: %i", contador);

	
	return 0;
}
