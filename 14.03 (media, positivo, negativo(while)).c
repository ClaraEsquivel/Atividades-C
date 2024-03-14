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
	float soma = 0, media, valor;
	int contador = 0;
	
	printf("Informe um valor :  \n");
	scanf("%f", &valor);
	
	while(valor > 0){
		contador++;	
		soma += valor;
		
		printf("Informe um valor :  \n");
		scanf("%f", &valor);
			
	}
	
	if(contador == 0){
		printf("N�o foi informado o n�mero positivo.");
	} else{
		media =  soma / contador;
		printf("A m�dia dos valores �: %.2f \n", media);
	}

	
	return 0;
	
}
