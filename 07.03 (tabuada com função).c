//Faça um programa em C que imprime a tabuada de um
//número informado pelo usuário de 1 a 10 utilizando uma
//função para exibir o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tabuada1a10 (int i, int numero){
	int tabuada;
	tabuada1a10 = (i = 1; i <= 10; i++);
	return tabuada;
}

int main(){
	 setlocale(LC_ALL, "");
	 
	int i;
	int numero;
	
	printf("Digite um número:  ");
	scanf("%d", &numero);
	
	tabuada1a10 = (i = 1; i <= 10; i++){
		printf(" %d x %d = %d \n", numero, i, numero*i);
	}
	
	return 0;
}
