#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "");
	float soma = 0, media, nota;
	int i, contador = 0;

	
	for(i = 1; i <= 3; i++){
		printf(" digite sua %i� nota:", i);
		scanf("%f", &nota);
		
    	while (nota < 0 || nota > 10){
	    	printf(" digite sua %i� nota:", i);
		    scanf("%f", &nota);
		
    	}
		soma += nota;
		contador++;
	}

	media = soma / contador;
	
	printf("M�dia : %.1f \n", media);
	
	if ( media >= 7){
		printf("\nAprovado!");
	} else if ( media <= 5 || media <= 6.9){
		printf("\nEm Recupera��o!");
	} else {
		printf("\nReprovado!");
	}
	
	return 0;
	
}
