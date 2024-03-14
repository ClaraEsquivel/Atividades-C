//algoritmo que calcule a m�dia de varios valores inteiros positivos
//inseridos pelo usu�rio, o final da leitura acontecer� quando for lido
//um valor negativo. 
//mostre a m�dia dos numeros informados pelo usu�rio

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
		printf("N�o foi informado o n�mero positivo.");
	} else{ // cast = quando os valores s�o inteiros
		media =  soma / (float) contador;
		printf("A m�dia dos valores �: %.2f \n", media);
	}

	
	return 0;
	
}
