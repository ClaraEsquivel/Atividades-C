#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");

int nota, soma, i;
float media;

	for (i = 1; i <= 4; i++){
		printf("Digite a %i� nota: ", i);
		scanf("%i", &nota);
	

	soma += nota;
}
	media = soma / 4;

	
	printf("\n A M�dia dos n�meros: %.1f \n", media);
	
return 0;	 
}
