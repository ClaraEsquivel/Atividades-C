#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>

//fa�a com que o usu�rio insira n�meros inteiros at� que seja
//inserido o n�mero 0.
//1- a quantidade de n�meros positivos que s�o pares ou impares
//2- a quantidade de n�meros positivos e negativos
//3- a quantidade de numeros inseridos

int main(){
	setlocale(LC_ALL, "")	;
	int numero, quantidadeNumeros = 0;
	int quantidadePositivos = 0, quantidadeNegativos = 0;
	int pares = 0, impares = 0;

	
	do{
		printf("Digite o n�mero:");
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
	printf("Quantidade de n�meros pares: %i \n", pares);
	printf("Quantidade de n�meros �mpares: %i \n", impares);
	printf("Quantidade de n�meros positivos: %i \n", quantidadePositivos);
	printf("Quantidade de n�meros negativos: %i \n", quantidadeNegativos);
	printf("Quantidade de n�meros: %i \n", quantidadeNumeros);	
	
	

	
	
	
	
	return 0;
} 
