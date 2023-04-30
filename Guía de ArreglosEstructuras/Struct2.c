#include <stdio.h>
#include <stdlib.h> // necesario para la función malloc

struct estudiante {
    char nombre[50];
    int edad;
    char direccion[100];
    char telefono[20];
    char email[50];
    float promedio;
};

void struct2() {
    int num_estudiantes;
    printf("\nIngrese la cantidad de estudiantes a ingresar: ");
    scanf("%d", &num_estudiantes);

    // declarar un arreglo de estructuras para almacenar la información de los estudiantes
    struct estudiante *estudiantes = malloc(num_estudiantes * sizeof(struct estudiante));

    // verificar si la reserva de memoria fue exitosa
    if (estudiantes == NULL) {
        printf("No se pudo reservar la memoria.\n");
    }

    // solicitar los datos de los estudiantes y almacenarlos en la estructura
    for (int i = 0; i < num_estudiantes; i++) {
        printf("\nIngrese los datos del estudiante #%d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", estudiantes[i].nombre);
        printf("Edad: ");
        scanf("%d", &estudiantes[i].edad);
        printf("Direccion: ");
        scanf("%s", estudiantes[i].direccion);
        printf("Telefono: ");
        scanf("%s", estudiantes[i].telefono);
        printf("Email: ");
        scanf("%s", estudiantes[i].email);
        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
    }

    // imprimir la información de los estudiantes
    printf("\n==============================================================\n");
    printf("\nInformacion de los estudiantes:\n");
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Estudiante #%d\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Direccion: %s\n", estudiantes[i].direccion);
        printf("Telefono: %s\n", estudiantes[i].telefono);
        printf("Email: %s\n", estudiantes[i].email);
        printf("Promedio: %.2f\n\n", estudiantes[i].promedio);
    }

    // liberar la memoria reservada con malloc
    free(estudiantes);

}

// int main(){
//   struct2();

//   return 0;
// }

// En este código, utilizamos la función malloc para reservar un bloque de memoria del tamaño adecuado para almacenar un arreglo de num_estudiantes estructuras estudiante. Si malloc devuelve un puntero nulo, significa que no se pudo reservar la memoria necesaria, por lo que se imprime un mensaje de error y se sale del programa con un código de retorno de 1.

// Al final del programa, liberamos la memoria reservada con malloc utilizando la función free.