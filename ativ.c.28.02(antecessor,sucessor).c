//Fa�a um algoritmo que solicite do usu�rio um n�mero
//inteiro e mostre na tela o seu antecessor e o seu
//sucessor.

#include <stdio.h>
#include <stdlib.h>

void cabecalho (){ // fun��o para realizar varios comandos em apenas uma linha.
	system("cls || clear");
	printf("=== SENAI ===");
	
}

int main(){
	
	int numero;
	int antecessor, sucessor;
	
	cabecalho(); // tr�s os comandos
	printf("\nDigite um numero inteiro aleatorio :  ");
	scanf("%i", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("=== Dados solicitados===");
	printf("\n Numero : %i \n", numero);
	printf("Antecessor : %i \n", antecessor);
	printf("Sucessor : %i \n", sucessor);
	
	
	return 0;
}
