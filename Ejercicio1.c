/*----- Colectivo de Asignatura -----*/
/* Ejemplos de printf con los operadores para enteros */

#include <stdio.h>

int main()
  {
    printf("%d\n", 455);
    printf("%i\n", 455);   /* i same as d in printf */
    printf("%d\n", +455);
    printf("%d\n", -455);
    printf("%hd\n", 32000);
    printf("%ld\n", 20000000000);
    printf("%o\n", 455);
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455);
    printf("%X\n", 455);

    return 0;
}