#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	int contador = 0;
	char continua;
	
	do{ //faça
	//Comandos a serem repetidos
		
		printf("Repetindo .... \n");
		
		contador = contador + 1;
		
		printf("Tecle 's' se deseja continuar \n");
		scanf("%c", &continua);
		fflush(stdin);
		
	} while (continua == 's'); //enquanto
	
	//exibindo quantidade de vezes qur o laço de repetição aconteceu
	printf("O bloco foi repetido %d vezes", contador);
	
	return 0;
	
}
