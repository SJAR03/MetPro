//  Esta hecho con funciones debido a que hago un include en el archivo llamado "Menu.c"
//  para poder ejecutar los scripts de todos los programas dentro de un solo menu,
//  por lo tanto, para ejecutar cada programa por separado solo hay que descomentar
//  el int main y deberia correr sin problemas

#include <stdio.h>

void array1() {
    char tabla[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};
    int size = sizeof(tabla) / sizeof(tabla[0]);

    for (int i = 0; i < size; i++) {
        printf("| %c ", tabla[i]);
    }
    printf("|\n");

}

// int main(){
//   array1();
// }