#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int nota, soma, i;
	float media;
	
	for (i = 1; i <= 3; i++){

		printf ("Digite sua %iª nota:  ", i);
		scanf ("%i", &nota);
		
		soma += nota;
}
		
		media = soma / 3;
		
	printf("\n A média do aluno é: %.1f", media);
	
	if ( media >= 7){
		printf("\nAprovado!");
	} else if ( media <= 4){
		printf("\nReprovado!");
	} else {
		printf("\nEm Recuperação!");
	}
	
	return 0;
}
