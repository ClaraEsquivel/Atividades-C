//Escrever um programa de computador que solicite  do usu�rio 5 n�meros inteiros e,
//ao final, apresente a  soma de todos os n�meros lidos.

#include <stdio.h>
#include <stdilib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
  int i, numero, soma = 0;

  for (i = 1; i <= 5; i++) {
    printf("Digite o %d� n�mero: ", i);
    scanf("%d", &numero);

    soma += numero;
  }

  printf("\nSoma dos n�meros: %d\n", soma);

  return 0;
}
