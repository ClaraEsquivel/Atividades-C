#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define DISCIPLINAS 3
#define NOTAS 2


int main(){
	setlocale(LC_ALL, "");
	
	char disciplinas[DISCIPLINAS][200];
	float notas[DISCIPLINAS][NOTAS];
	float media[NOTAS], soma = 0;
	int i, j;
	
	for(i = 0; i < DISCIPLINAS; i++){
		printf("Digite o nome da disciplina: ", i+1);
		scanf("%s", &disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
			soma += notas[i][j];
		}
		media[i] = soma / NOTAS;
		soma = 0;
		printf("\n");
	}
	 
	for(i = 0; i < DISCIPLINAS; i++){
		printf("%iº Disciplina: %s\n", i+1, disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("%iº Nota: %.1f\n", j+1, notas[i][j]);
		}
			printf("Média: %.1f\n", media[i]);
			
		if(media[i] >= 7 ){
			printf("Aprovado\n\n");
		} else if( media[i] >=5){
		printf("Recuperação\n\n");
		} else {
			printf("Reprovado\n\n");
		}
	}	

	
	return 0;
}
