#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMedia(float n1, float n2){ 
	float media;
	media = (n1 + n2) / 2;
	return media;
}


int main(){
	setlocale(LC_ALL, "");
	
	float primeiroNumero, segundoNumero;
	float media;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	media = calcularMedia(primeiroNumero, segundoNumero);	 
	
	printf("\n Media: %f \n", media);	
	
	return 0;
}
