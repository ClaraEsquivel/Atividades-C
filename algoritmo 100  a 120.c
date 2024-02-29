//escreva um algoritmo que gera e escreve os numeros pares entre
//100 e 120

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//algoritmo: números de 1 a 10

int main(){
	setlocale(LC_ALL, "");
	int i;
	
	printf("Lista de números pares entre 100 e 120: \n");
	for (i = 100; i <= 120; i++){
		if (i % 2 == 0) {
		  printf("%d \n" , i);
	     }	
 }
		
	
	
	return 0;
}
