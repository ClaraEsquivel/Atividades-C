#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	
	float soma = 0, media, nota;
	int i;
	
	for (i = 1; i <=2; i++){
	
	
	printf("Digite sua %i� nota: ", i);
	scanf("%f", &nota);
	 
	 
	while (nota < 0 || nota > 10) {
		printf("Digite sua %i� nota: ", i);
	    scanf("%f", &nota);
	}
	
	soma += nota; 
	
}
	media = soma / 2;
	
	printf("A m�dia do aluno �: %.1f ", media);
	
	return 0;
}
