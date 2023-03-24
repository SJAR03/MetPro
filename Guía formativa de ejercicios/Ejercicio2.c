/*----- Colectivo de Asignatura -----*/
/* Ejemplos de printf con los operadores para flotantes */

#include <stdio.h>

int main()
{
  printf("%e\n", 1234567.89);
  printf("%e\n", +1234567.89);
  printf("%e\n", -1234567.89);
  printf("%E\n", 1234567.89);
  printf("%f\n", 1234567.89);
  printf("%g\n", 1234567.89);
  printf("%G\n", 1234567.89);

  return 0;
}
