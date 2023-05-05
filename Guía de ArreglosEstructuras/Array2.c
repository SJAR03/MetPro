//  Esta hecho con funciones debido a que hago un include en el archivo llamado "Menu.c"
//  para poder ejecutar los scripts de todos los programas dentro de un solo menu,
//  por lo tanto, para ejecutar cada programa por separado solo hay que descomentar
//  el int main y deberia correr sin problemas

#include <stdio.h>

void array2() {
    float tabla[] = {0, 95.75, 0, 87.91, 0, 85.72};
    int size = sizeof(tabla) / sizeof(tabla[0]);

    for (int i = 0; i < size; i++) {
        if (tabla[i] == 0) {
            printf("|   ");
        } else {
            printf("| %.2f ", tabla[i]);
        }
    }
    printf("|\n");

}

// int main(){
//   array2();
// }