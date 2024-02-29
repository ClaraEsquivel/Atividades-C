//O algoritmo deve escrever o nome do aluno, duas notas, a média, o
//conceito correspondente e a mensagem 'Aprovado' se o conceito for A,
//B ou C, e 'Reprovado' se o conceito for D ou E.
//A atribuição dos conceitos obedece a tabela abaixo:
//maior ou igual a 9 = A
//maior ou igual a 7.5 e menor que 9 = B
//maior ou igual a 6 e menor que 7.5 = C
//maior ou igual a 4 e menor que 6 = D
//menor que 4 = E	

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho(){
	system("cls || clear");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL, "");
	
	char nome[200];
	float primeiraNota, segundaNota, media;
	char conceito;
	
	cabecalho();
	printf("Digite o nome do aluno:  ");
	//scanf("%s", &nome); = padrão
	fgets(nome, 200, stdin); // comando mais seguro, trás as palavras após o espaço
	//gets(nome); = trás as palavras após o espaço
	
	cabecalho();
	printf("Digite a primeira nota:  ");
	scanf("%f", &primeiraNota);
	
	cabecalho();
	printf("Digite a segunda nota:  ");
	scanf("%f", &segundaNota);
	
	cabecalho();
	media = (primeiraNota + segundaNota) / 2;
	
	if(media >=9){
		conceito = 'A';
	} else if(media >=7.5){
    	conceito = 'B';
	} else if(media >=6){
	    conceito = 'C';	
	} else if(media >=4){
		conceito = 'D';
	}else {
		conceito = 'E';
	}
	
		
	printf("\n Nome: %s \n", nome);	
	printf("\n Primeira nota: %.1f \n", primeiraNota);
	printf("\n Segunda nota: %.1f \n", segundaNota);
	printf("\n Média: %.1f", media);
	printf("\n Conceito: %s", conceito);
	
	if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("\nAPROVADO");
	}
	else{
		printf("\nREPROVADO");
	}
		
	
	return 0;
	
}
