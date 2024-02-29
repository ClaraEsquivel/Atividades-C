#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	 setlocale(LC_ALL, "");
	 
	int i;
	int numero;
	
	printf("Digite um número:  ");
	scanf("%d", &numero);
	
	for (i = 1; i <= 10; i++){
		printf(" %d x %d = %d \n", numero, i, numero*i);
	}
	
	return 0;
}
