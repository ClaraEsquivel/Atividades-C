#include <stdio.h>
#include <locale.h>
// crie um programa que leia 3 notas, armazenando em um vetor
//mostre as notas informadas

int main(){
	float nota[3], soma = 0;
	int i;
	float media;

	setlocale(LC_ALL, "");
	
	printf("Informe três notas:\n ");
	
	for(i = 0; i < 3; i++){
		printf("%dª Nota :", i + 1);
		scanf("%f", &nota[i]);
		
		soma += nota[i];
	}
 
	printf("=== Resultados ===");
	for(i = 0; i < 3; i++){
		printf("\n %dª Nota: %.2f\n", i + 1, nota[i]);	
	}
 
    	media = soma / i;
 	
	printf("\n Média das notas: %.1f", media);
	
	return 0;
	
}
