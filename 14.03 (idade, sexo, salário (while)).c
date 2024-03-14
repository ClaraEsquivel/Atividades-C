//Foi feita um pesquisa entre os habitantes de uma região.
//Foram coletados dados de idade, sexo(M/F) e salário.
//Faça um algoritmo que informe:

//a) media de salario do grupo
//b) maior e menor idade do grupo
//c) quantidade de mulheres com salário a partir de R$5.000,00

//crie um menu com duas opções:
// Código | descrição
//   1	  | Adicionar pessoa
//	 2	  | Exibir resultados e sair

//o final da leitura de dados se dará quando o usuário 
//digitar o número do código 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "");
	int idade, soma = 0, contador =0;
	float salario, salarioMulher, mediaSalario;
	char opcao;
	char [50] "F", "M";
	
	printf("Digite sua idade:  ");
	scanf("%i", &idade)
	printf("Digite seu sexo [F] ou [M]:  ");
	scanf("%c", sexo),
	printf("Digite seu salário: R$");
	scanf("%f", salario);
	
	while(){
		if(){
		
		 contador ++;
		soma += salario
		}
		
	}
	
	
	
	switch(opcao){
		case 1:
			printf("Adicionar pessoa");
			break;
		case 2:
			printf("Exibir resultado e sair");
			break;
		default:
			printf("Opção inválida");
	}
	
	return 0;
}
