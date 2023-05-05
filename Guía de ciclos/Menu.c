// Para que el programa funcione correctamente, todos los archivos de los demás
// programas deberian estar en una misma carpeta, de esa forma hace el include sin problemas.

#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio1.c"
#include "Ejercicio2.c"
#include "Ejercicio3.c"
#include "Ejercicio4.c"
#include "Ejercicio5.c"

int main() {
    int opcion_principal = 0;

    while (opcion_principal != 6) {
        // Menú principal
        printf("\nBienvenido al programa\n");
        printf("Seleccione una opcion:\n");
        printf("1. Ejercicio #1\n");
        printf("2. Ejercicio #2\n");
        printf("3. Ejercicio #3\n");
        printf("4. Ejercicio #4\n");
        printf("5. Ejercicio #5\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion_principal);

        switch(opcion_principal) {
            case 1:
                main1();
                break;
            case 2:
                main2();
                break;
            case 3:
                main3();
                break;
            case 4:
                main4();
                break;
            case 5:
                main5();
                break;
            case 6:
                printf("\nGracias por utilizar el programa.\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
                break;
        }
    }

    return 0;
}
