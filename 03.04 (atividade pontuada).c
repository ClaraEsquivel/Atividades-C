#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#define TAM 5

int main (){
	setlocale(LC_ALL,"");
	
	int i , numero[TAM], pares = 0, impares = 0, quantidadePositivos = 0, quantidadeNegativos = 0, quantidadeNumeros = 0;
	int maiorNumero = 0, menorNumero = 999; 
	int soma = 0, media = 0, somaPares = 0, somaImpares = 0, mediaPares = 0, mediaImpares = 0;
	
	for(i = 0; i < TAM; i++){
		printf("Digite um número: ", i+1);
		scanf("%i",&numero[i]);
		
		if(numero[i] > maiorNumero ){
	    	maiorNumero = numero[i];
	    	
		} else if(numero[i] < menorNumero){
	    	menorNumero = numero[i];
        	}
		
		if(numero[i] > 0){
			quantidadeNumeros++;
		}
		
			if(numero[i] > 0){
			quantidadePositivos++;
	
				if(numero[i] % 2 == 0 ){
					pares++;
					somaPares += numero[i];
					} else{
					impares++;
					somaImpares += numero[i];
					}
		
			}else if(numero[i] < 0){
			quantidadeNegativos++;
			}
	
		soma += numero[i];
	
    }
	
	for(i = TAM-1; i >= 0; i--){
		printf("\nnúmero : %i\n", numero[i]);
 	}

	if(pares != 0)	{
		mediaPares = somaPares / pares;
	}
	
	if(impares != 0) {
    	mediaImpares = somaImpares / impares;
 	}
	
	media = soma / quantidadeNumeros;
	
	printf("\n === Exibindo Resultados === \n");
	
	printf("Números Pares: %i \n", pares);
	printf("Números Impares: %i \n", impares);
	printf("Números Positivos: %i \n",quantidadePositivos);
	printf("Números Negativos: %i \n",quantidadeNegativos);
	printf("Números Inseridos: %i \n",quantidadeNumeros);
	printf("Média Pares: %i \n", mediaPares);
	printf("Média Impares: %i \n", mediaImpares);
	printf("Média Total: %i \n", media);
	printf("Maior Número: %i \n", maiorNumero);
	printf("Menor Número: %i \n", menorNumero);
	
	return 0;
}
