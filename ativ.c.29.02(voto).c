//Elabore um algoritmo usando opera��es l�gicas para informar se
//uma pessoa � obrigada a votar.
//Considere que a regra � que menores de 18 e maiores que 65 n�o
//s�o obrigados a votar.

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
		printf("� obrigado a votar");
	}
	else{
		printf("N�o � obrigado a votar");
	}
		
	
	return 0;
}
