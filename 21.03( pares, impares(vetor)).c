//crie um programa que leia 6 n�meros,armazenando em um vetor
// e informe quantos s�o pares e quantos s�o �mpares

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numeros[6], pares = 0, impares = 0;
	int i;
	
	printf("Digite os n�meros: \n ");
	for(i = 0; i < 6; i++){
		printf("%d� n�mero: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
		pares++;
	} else{
		impares++;
	}
	
	}
	 
	printf("\n = = = Resultados = = = \n ") ;
	
	for(i = 0; i < 6; i++){
		printf("%d� n�mero: %d\n", i + 1, numeros[i]);
	}
	
	
	
	printf("Pares : %i \n", pares);
	printf("�mpares : %i \n", impares);
	
	return 0;
}
