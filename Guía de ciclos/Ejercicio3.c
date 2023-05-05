#include <stdio.h>

int main3() {
    int cantidad = 0;
    float estatura, suma = 0, promedio;

    while(1) {
        printf("Ingrese la estatura (en metros) de la persona (o '0' para salir): ");
        scanf("%f", &estatura);
        
        if (estatura == 0) {
            break;
        }
        
        suma += estatura;
        cantidad++;
    }
    
    if (cantidad == 0) {
        printf("No se ingresaron estaturas\n");
    } else {
        promedio = suma / cantidad;
        printf("La estatura promedio del grupo es: %.2f metros\n", promedio);
    }

    return 0;
}