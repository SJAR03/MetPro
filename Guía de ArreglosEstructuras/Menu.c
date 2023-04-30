#include <stdio.h>
#include <stdlib.h>
#include "Array1.c"
#include "Array2.c"
#include "Array3.c"
#include "Struct1.c"
#include "Struct2.c"
#include "Struct3.c"

int main() {
    int opcion_principal = 0;
    int opcion_sub = 0;

    while (opcion_principal != 3) {
        // Menú principal
        printf("\nBienvenido al programa\n");
        printf("Seleccione una opción:\n");
        printf("1. Arreglos\n");
        printf("2. Estructuras\n");
        printf("3. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion_principal);

        switch(opcion_principal) {
            case 1:
                // Menú de arreglos
                printf("\nSeleccione una opcion:\n");
                printf("1. Arreglo 1\n");
                printf("2. Arreglo 2\n");
                printf("3. Arreglo 3\n");
                printf("4. Volver al menú principal\n");
                printf("Opcion: ");
                scanf("%d", &opcion_sub);

                switch(opcion_sub) {
                    case 1:
                        array1();
                        break;
                    case 2:
                        array2();
                        break;
                    case 3:
                        array3();
                        break;
                    case 4:
                        break;
                    default:
                        printf("\nOpción inválida.\n");
                        break;
                }
                break;

            case 2:
                // Menú de estructuras
                printf("\nSeleccione una opcion:\n");
                printf("1. Estructura 1\n");
                printf("2. Estructura 2\n");
                printf("3. Estructura 3\n");
                printf("4. Volver al menú principal\n");
                printf("Opcion: ");
                scanf("%d", &opcion_sub);

                switch(opcion_sub) {
                    case 1:
                        struct1();
                        break;
                    case 2:
                        struct2();
                        break;
                    case 3:
                        struct3();
                        break;
                    case 4:
                        break;
                    default:
                        printf("\nOpcion inválida.\n");
                        break;
                }
                break;

            case 3:
                printf("\nGracias por utilizar el programa.\n");
                break;

            default:
                printf("\nOpcion inválida.\n");
                break;
        }
    }

    return 0;
}
