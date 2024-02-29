//Elabore um algoritmo usando operações lógicas para informar se
//uma pessoa é obrigada a votar.
//Considere que a regra é que menores de 18 e maiores que 65 não
//são obrigados a votar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho(){
	system("cls || clear");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL, "");
	
	int idade;
	
	printf("Digite sua idade:  ");
	scanf("%i", &idade);
	
	if(idade >= 18 && idade <= 65 ){
		printf("É obrigado a votar");
	}
	else{
		printf("Não é obrigado a votar");
	}
		
	
	return 0;
}
