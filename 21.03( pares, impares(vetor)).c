//crie um programa que leia 6 números,armazenando em um vetor
// e informe quantos são pares e quantos são ímpares

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numeros[6], pares = 0, impares = 0;
	int i;
	
	printf("Digite os números: \n ");
	for(i = 0; i < 6; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
		pares++;
	} else{
		impares++;
	}
	
	}
	 
	printf("\n = = = Resultados = = = \n ") ;
	
	for(i = 0; i < 6; i++){
		printf("%dº número: %d\n", i + 1, numeros[i]);
	}
	
	
	
	printf("Pares : %i \n", pares);
	printf("Ímpares : %i \n", impares);
	
	return 0;
}
