//crie um programa que leia 6 n�meros,armazenando em um vetor
// e informe quantos s�o pares e quantos s�o �mpares

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>

#define TAM 6 //vc define o tamanho, 
int main(){
	setlocale(LC_ALL, "");
	int numeros[TAM], pares = 0, impares = 0;
	int i;
	
	printf("Digite os n�meros: \n ");
	
	for(i = 0; i < 6; i++){
		printf("%d� n�mero: ", i + 1);
		scanf("%d", &numeros[TAM]);
		
		if(numeros[i] % 2 == 0){
			pares++;
		} else{
			impares++;
		}
	// numeros[TAM] %2 == 0 ? pares++ : impares++;
	// ^ mesma coisa do if
	}
	 
	printf("\n = = = Resultados = = = \n ") ;
	
	for(i = 0; i < TAM; i++){
		//if(numeros[TAM] %2 == 0) - apenas pares
		// if(numeros[TAM] %2 != 0) - apenas impares
		printf("%d� n�mero: %d\n", i + 1, numeros[TAM]);
	}
		
	printf("Quantidade de pares : %i \n", pares);
	printf("Quantidade de �mpares : %i \n", impares);
	
	return 0;
}
