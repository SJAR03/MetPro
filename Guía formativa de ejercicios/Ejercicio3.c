/*----- Colectivo de Asignatura -----*/
/* Ejemplos de printf con operadores para enteros, dobles y string */

#include <stdio.h>

int main()
{
  int i = 873;
  double f = 123.94536;
  char s[] = "Happy Birthday";

  printf("Using precision for integers\n");
  printf("\t%.4d\n\t%.9d\n\n", i, i);
  printf("Using precision for floating-point numbers\n");
  printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);
  printf("Using precision for strings\n");
  printf("\t%.11s\n", s);

  return 0;
}
