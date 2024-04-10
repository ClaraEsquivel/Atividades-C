#include <stdio.h>
#include <locale.h>

#define BANDA 3
#define INTEGRANTES 5


int main(){
	setlocale(LC_ALL, "");
	char banda[BANDA][100];
	char integrante[BANDA][INTEGRANTES][200];
	int i, j;
	
	for(i = 0; i < BANDA; i++){
		printf("Digite o nome da %iª banda: ", i+1);
		scanf("%s", &banda[i]);
		
		fflush(stdin);
		
		for(j = 0; j < INTEGRANTES; j++){
			printf("Digite o nome do %iº integrante: ", j+1);
			scanf("%s", &integrante[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < BANDA; i++){
		printf(" \n | == %iª Banda == | : %s\n ", i+1, banda[i]);
		
		for(j = 0; j < INTEGRANTES; j++){
			printf("\n %iº Integrante: %s\n", j+1, integrante[i][j]);
		}
		
	}
	
	return 0;
}
