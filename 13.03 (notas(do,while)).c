#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int contador = 0, nota, soma,  i = 0;
	float media;
	char continua;
	
	
	do{
		i++,
		printf ("Informe sua %i nota:  \n", i);
		scanf("%i", &nota);
		
		fflush(stdin);
	
		contador = contador + 1;
		
		printf("Tecle 'N' se deseja adicionar mais uma nota \n");
		scanf("%c", &continua);
		system("cls || clear ");
		
 	    soma = soma + nota;

		
	}while (continua == 'n');
	
	
	media = soma / i;
	
	printf(" \nA media é: %.2f", media);
	
	printf(" \n Esse algoritmo teve %d repetição(ões).", contador);
	
	
	return 0;
}
