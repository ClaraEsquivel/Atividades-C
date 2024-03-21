//crie um programa que leia 6 números,armazenando em um vetor
// e informe quantos são pares e quantos são ímpares

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
	
	printf("Digite os números: \n ");
	
	for(i = 0; i < 6; i++){
		printf("%dº número: ", i + 1);
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
		printf("%dº número: %d\n", i + 1, numeros[TAM]);
	}
		
	printf("Quantidade de pares : %i \n", pares);
	printf("Quantidade de ímpares : %i \n", impares);
	
	return 0;
}
