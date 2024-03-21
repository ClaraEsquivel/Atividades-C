#include <stdio.h>
#include <locale.h>
#include <limits.h>
//leia 5 numeros, armazenando em um vetor, e informando
//qual é o maior e qual é o menor valor

int main(){
	int numero[5];
	int i;
	int maiorNumero = INT_MIN, menorNumero = INT_MAX;

	setlocale(LC_ALL, "");
	
	printf("Informe cinco números:\n ");
	
	for(i = 0; i < 5; i++){
    	do{
		
			printf("%iª Número :", i + 1);
			scanf("%i", &numero[i]);
		} while(numero[i] < 0 || numero[i] > 10);
		
		if(numero[i] > maiorNumero){
 			maiorNumero = numero[i];
		} 
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
	}
 
	printf("=== Resultados ===");
	
	for(i = 0; i < 5; i++){
		printf("\n %iª Número: %i\n", i + 1, numero[i]);		
	}
	
 	printf("\nO maior número é: %i", maiorNumero);
 	printf("\nO menor número é: %i", menorNumero);

	
	return 0;
	
}
