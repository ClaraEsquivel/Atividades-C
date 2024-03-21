#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define TAM 5
//crie um algoritmo que receba do usuário valores e armazene em um vetor 5 números
//caso seja informado um valor negativo atribua o valor 0
//liste os valores do vetor

int main(){
	setlocale(LC_ALL, "");
	int numeros[TAM], i, contador = 0
	
	for(i = 0; i < TAM; i++ ){
		printf("%iº número: ", i + 1);
		scanf("%i", &numeros[i]);
		
		if(numeros[i] < 0){
			contador++;
		}
	}
	
	return 0;
}
