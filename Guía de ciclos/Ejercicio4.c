#include <stdio.h>

int main4() {
    float ahorro_mensual, ahorro_anual = 0;
    int mes;

    printf("Ingrese la cantidad de dinero ahorrada al final del mes %d: ", 1);
    scanf("%f", &ahorro_mensual);

    for (mes = 1; mes <= 11; mes++) {
        ahorro_anual += ahorro_mensual;
        printf("Lleva ahorrado C$%.2f en el mes %d\n", ahorro_anual, mes);
        printf("Ingrese la cantidad de dinero ahorrada al final del mes %d (ingrese 0 para salir): ", mes+1);
        scanf("%f", &ahorro_mensual);
        if (ahorro_mensual == 0) {
            break;
        }
    }

    printf("\nAhorro un total de C$%.2f en el anio.\n", ahorro_anual);

    return 0;
}