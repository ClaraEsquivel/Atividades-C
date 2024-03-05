//Escrever um programa de computador que solicite  do usuário 5 números inteiros e,
//ao final, apresente a  soma de todos os números lidos.

#include <stdio.h>
#include <stdilib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
  int i, numero, soma = 0;

  for (i = 1; i <= 5; i++) {
    printf("Digite o %dº número: ", i);
    scanf("%d", &numero);

    soma += numero;
  }

  printf("\nSoma dos números: %d\n", soma);

  return 0;
}
