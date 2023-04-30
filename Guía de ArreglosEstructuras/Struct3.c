#include <stdio.h>

struct atleta {
    char nombre[50];
    int edad;
    char deporte[50];
};

struct info_personal {
    char direccion[100];
    char telefono[20];
    char email[50];
};

void struct3() {
    struct atleta atletas[5];
    struct info_personal info[5];

    // Pedir datos de los atletas
    for (int i = 0; i < 5; i++) {
        printf("\nIngrese los datos del atleta #%d:\n", i+1);
        printf("Nombre: ");
        scanf("%s", atletas[i].nombre);
        printf("Edad: ");
        scanf("%d", &atletas[i].edad);
        printf("Deporte: ");
        scanf("%s", atletas[i].deporte);
        printf("Direccion: ");
        scanf("%s", info[i].direccion);
        printf("Telefono: ");
        scanf("%s", info[i].telefono);
        printf("Email: ");
        scanf("%s", info[i].email);
        printf("\n");
    }

    // Imprimir datos de los atletas
    printf("\n==============================================================\n");
    printf("\nDatos de los atletas:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAtleta #%d:\n", i+1);
        printf("Nombre: %s\n", atletas[i].nombre);
        printf("Edad: %d\n", atletas[i].edad);
        printf("Deporte: %s\n", atletas[i].deporte);
        printf("Direccion: %s\n", info[i].direccion);
        printf("Telefono: %s\n", info[i].telefono);
        printf("Email: %s\n", info[i].email);
        printf("\n");
    }

}

// int main(){
//   struct3();

//   return 0;
// }
