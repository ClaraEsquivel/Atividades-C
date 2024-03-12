#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	float soma = 0, media, nota;
	int i;
	
	for(i = 1; i <= 2; i++){
		do{
		printf(" digite sua %iª nota:", i);
		scanf("%f", &nota);
	} while (nota < 0 || nota > 10);
		
		soma += nota;
	}

	media = soma / 2;
	
	printf("Média : %.1f \n", media);
	
	return 0;
	
}
