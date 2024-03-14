//algoritmo que calcule a média de varios valores inteiros positivos
//inseridos pelo usuário, o final da leitura acontecerá quando for lido
//um valor negativo. 
//mostre a média dos numeros informados pelo usuário

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	float media;
	int contador = 0, soma = 0, valor;
	
	printf("Informe um valor :  \n");
	scanf("%i", &valor);
	
	while(valor > 0){
		contador++;	
		soma += valor;
		
		printf("Informe um valor :  \n");
		scanf("%i", &valor);
	}

	if(contador == 0){
		printf("Não foi informado o número positivo.");
	} else{ // cast = quando os valores são inteiros
		media =  soma / (float) contador;
		printf("A média dos valores é: %.2f \n", media);
	}

	
	return 0;
	
}
