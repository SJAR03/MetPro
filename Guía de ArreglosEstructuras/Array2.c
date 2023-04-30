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