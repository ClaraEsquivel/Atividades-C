//Escrever um algoritmo que mostre os n�meros  �mpares entre 1 e 20.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
  int i;

printf("N�meros pares e �mpares de 1 at� 20:");
  for (i = 1; i <= 20; i++) {
    if (i % 2 != 0) {
      printf("%d \n", i);
    }
  }

  return 0;
}
