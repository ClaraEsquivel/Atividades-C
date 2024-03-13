#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	int contador = 0;
	float media, nota, soma = 0;
	char opcao;
	
	
	do{
		
		printf ("Informe a nota:  \n");
		scanf("%i", &nota);
		
		soma = soma + nota;
		
		contador ++;
		
		fflush(stdin);
		
		printf("Deseja adicionar mais uma nota? Se não tecle 'n' \n");
		scanf("%c", &opcao);
	
		
		opcao = toupper (opcao); // converte a letra para maiúscula 
				
	}while (opcao != 'N');
	
	
	media = soma / contador ;
	
	printf(" \nA media é: %.2f", media);
	
	printf(" \n Esse algoritmo teve %d repetição(ões).", contador);
	
	
	return 0;
}
