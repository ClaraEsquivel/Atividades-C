//Fa�a um algoritmo que solicite do usu�rio um valor
//qualquer e mostre na tela com um reajuste de 10%.

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system ("cls || clear");
}

int main(){
	
	float valorQualquer, reajuste, valorReajustado;
	
    cabecalho();	
	printf("Digite um valor qualquer:");
	scanf("%f" , &valorQualquer);
	
	reajuste = valorQualquer * 0.1;
	valorReajustado = valorQualquer - reajuste;
	
	
	printf(" O valor com o reajuste de 10% �: %.2f \n", valorReajustado);
	
	
	
	return 0;
}
