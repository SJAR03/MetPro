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