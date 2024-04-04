#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	/* int numeros[2][2] = {{1,2} , {3,4}}; */
	
	
	//Declarando matriz
	int numeros[2][2]; //define o tamanho da matriz
	
	// primeiro linha e depois coluna
	
	//atribuindo valores
	numeros[0][0] = 1;
	numeros[0][1] = 2; // sempre começa
	numeros[1][0] = 3; // com 0
	numeros[1][1] = 4;
	
	//exibindo dados
	printf("Elemento 1: %d\n", numeros[0][0]);
	printf("Elemento 2: %d\n", numeros[0][1]);
	printf("Elemento 3: %d\n", numeros[1][0]);
	printf("Elemento 4: %d\n", numeros[1][1]);
	
	return 0;
}
