#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

//A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre
//o salário e número de filhos das famílias da cidade. A prefeitura deseja saber:

//a) total de famílias que responderam a pesquisa;
//b) média do salário da população;
//c) média do número de filhos;
//d) maior salário;
//e) menor salário.

//Crie um menu com duas opções.
//Código | Descrição
//1 | Adicionar família
//2 | Sair e exibir resultados
//O final da leitura de dados se dará com quando o usuário digitar o número código 2.

int main(){
	setlocale(LC_ALL,"");
	int totalFamilias,  maiorSalario = INT_MIN , menorSalario = INT_MAX;
	int filho, somaFilho = 0, opcao, quantidadeFilho;
	float salario, somaSalario = 0, quantidadeSalarios = 0;
	float mediaSalario, mediaFilho;
	
	do{
		printf("Código \t Descrição \n");
		printf("1 \t Adicionar Família \n");
		printf("2 \t Sair e exibir resultados \n");
		printf("\nDigite a opção desejada : ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nDigite seu salário: R$");
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
				printf("\nMédia do salário da população : %.1f", mediaSalario);
				printf("\nMédia do número de filhos : %.1f ", mediaFilho);
				printf("\nMaior salário : %i  ", maiorSalario);
				printf("\nMenor salário : %i ", menorSalario);
				
				break;
			default: 
				printf("Opção inválida");
		}
		
	} while(opcao != 2);
	
		return 0;
}
