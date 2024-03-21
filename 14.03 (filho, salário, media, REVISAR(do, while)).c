#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

//A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre
//o sal�rio e n�mero de filhos das fam�lias da cidade. A prefeitura deseja saber:

//a) total de fam�lias que responderam a pesquisa;
//b) m�dia do sal�rio da popula��o;
//c) m�dia do n�mero de filhos;
//d) maior sal�rio;
//e) menor sal�rio.

//Crie um menu com duas op��es.
//C�digo | Descri��o
//1 | Adicionar fam�lia
//2 | Sair e exibir resultados
//O final da leitura de dados se dar� com quando o usu�rio digitar o n�mero c�digo 2.

int main(){
	setlocale(LC_ALL,"");
	int totalFamilias,  maiorSalario = INT_MIN , menorSalario = INT_MAX;
	int filho, somaFilho = 0, opcao, quantidadeFilho;
	float salario, somaSalario = 0, quantidadeSalarios = 0;
	float mediaSalario, mediaFilho;
	
	do{
		printf("C�digo \t Descri��o \n");
		printf("1 \t Adicionar Fam�lia \n");
		printf("2 \t Sair e exibir resultados \n");
		printf("\nDigite a op��o desejada : ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nDigite seu sal�rio: R$");
				scanf("%i", &salario);
				
				printf("Digite a quantidade e filhos: ");
				scanf("%i", &filho);
				
				quantidadeFilho++;
				somaFilho += filho;
			
				if(salario > maiorSalario){
					maiorSalario = salario;
				}
				if(salario < menorSalario){
					menorSalario = salario;	
				}
				
				quantidadeSalarios++;
				somaSalario += salario;	
				
			break;
			
			case 2:
				mediaSalario = somaSalario / quantidadeSalarios;
				
				mediaFilho = somaFilho / quantidadeFilho;
				
				printf("\nTotal de familias que responderam a pesquisa : %i ",totalFamilias);
				printf("\nM�dia do sal�rio da popula��o : %.1f", mediaSalario);
				printf("\nM�dia do n�mero de filhos : %.1f ", mediaFilho);
				printf("\nMaior sal�rio : %i  ", maiorSalario);
				printf("\nMenor sal�rio : %i ", menorSalario);
				
				break;
			default: 
				printf("Op��o inv�lida");
		}
		
	} while(opcao != 2);
	
		return 0;
}
