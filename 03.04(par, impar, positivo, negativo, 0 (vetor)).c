#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>

//faça com que o usuário insira números inteiros até que seja
//inserido o número 0.
//1- a quantidade de números positivos que são pares ou impares
//2- a quantidade de números positivos e negativos
//3- a quantidade de numeros inseridos

int main(){
	setlocale(LC_ALL, "")	;
	int numero, quantidadeNumeros = 0;
	int quantidadePositivos = 0, quantidadeNegativos = 0;
	int pares = 0, impares = 0;

	
	do{
		printf("Digite o número:");
		scanf("%i", &numero);
		
		if( numero != 0){
		   quantidadeNumeros++;   
	 	}
		 
		if(numero > 0){
			quantidadePositivos++;
			
			if(numero % 2 == 0){
				pares++;
			} else {
				impares++;
			}
			
		}else if(numero < 0 ){
			quantidadeNegativos++;
		}
			
	} while(numero != 0);
	
	printf("= = =  RESULTADOS = = = \n");
	printf("Quantidade de números pares: %i \n", pares);
	printf("Quantidade de números ímpares: %i \n", impares);
	printf("Quantidade de números positivos: %i \n", quantidadePositivos);
	printf("Quantidade de números negativos: %i \n", quantidadeNegativos);
	printf("Quantidade de números: %i \n", quantidadeNumeros);	
	
	

	
	
	
	
	return 0;
} 
