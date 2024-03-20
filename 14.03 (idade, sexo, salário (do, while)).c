//Foi feita um pesquisa entre os habitantes de uma regi�o.
//Foram coletados dados de idade, sexo(M/F) e sal�rio.
//Fa�a um algoritmo que informe:

//a) media de salario do grupo
//b) maior e menor idade do grupo
//c) quantidade de mulheres com sal�rio a partir de R$5.000,00

//crie um menu com duas op��es:
// C�digo | descri��o
//   1	  | Adicionar pessoa
//	 2	  | Exibir resultados e sair

//o final da leitura de dados se dar� quando o usu�rio 
//digitar o n�mero do c�digo 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
// ^ permitr que voce coloque o maior ou menor valor inteiro.

int main (){
	setlocale(LC_ALL, "");
	int idade, opcao, maiorIdade = INT_MIN , menorIdade = INT_MAX, quantidadeSalarios = 0, mulheres5k = 0;
	float salario, somaSalarios = 0, mediaSalarial;
	char sexo;
	
	
do{
	
	printf("C�digo \t Descri��o \n");
	printf("1 \t Adicionar pessoa \n");
	printf("2 \t Exibir resultados e sair \n");
	printf("Digite a op��o desejada: ");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			printf("Digite sua idade:  ");
			scanf("%i", &idade);
			
			fflush(stdin);
			printf("Digite seu sexo [F] ou [M]:  ");
			scanf("%c", &sexo);
			
			printf("Digite seu sal�rio: R$");
			scanf("%f", &salario);
			
			sexo =toupper(sexo);
			
			if(idade > maiorIdade){
				maiorIdade = idade;
			}
			if(idade < menorIdade){
				menorIdade = idade;
			}
			
			quantidadeSalarios++;
			somaSalarios += salario;
			
			if(sexo == 'F' && salario >= 5000){
				mulheres5k++;
			}
			break;
			
		case 2:
			mediaSalarial = somaSalarios / quantidadeSalarios;
			
			printf("M�dia salarial do grupo: R$ %.2f \n", mediaSalarial);
			printf("\nMaior idade: %i", maiorIdade);
			printf("\nMenor idade: %i", menorIdade);
			printf("\nQuantidade de mulheres com sal�rio acima de R$ 5000:  %i", mulheres5k);
			
			break;
		default:
			printf("Op��o inv�lida");
	}
	
} while(opcao != 2);
	return 0;
}
