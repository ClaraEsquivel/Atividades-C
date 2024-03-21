//Crie um algoritmo que leia o nome e a idade de 5 pessoas,
//armazenando em  vetores.
//liste o nome e a idade de cada pessoa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAM 2
#define STRING 200
int main(){
	setlocale(LC_ALL,"");
	int pessoa[TAM], idades[TAM];
	int i;
	char nomes[TAM][STRING];
	
	
	for(i = 0; i < TAM; i++){
		fflush(stdin);
		printf("\nDigite o seu nome: ");
		scanf("%s", &nomes[i]);
	
		fflush(stdin);
		printf("\nDigite sua idade: ");
		scanf("%i", &idades[i]);
	}
	
	printf("= = = Resultados = = =");
	
	for(i = 0; i < TAM; i++){
		printf("\n %dª pessoa \n", i + 1, pessoa[TAM]);
		printf("\n Nome: %s\n", nomes[i]);
		printf("\n Idade: %i\n", idades[i]);
		
	}
		
	return 0;
}
