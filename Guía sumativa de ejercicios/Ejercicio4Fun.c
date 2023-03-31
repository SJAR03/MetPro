// Ejercicio #4: En un Centro de Atención al Cliente (CAT) de una empresa X de Nicaragua se ha
// establecido una política de bono para incentivar a sus empleados.

#include <stdio.h>

float calcularIncentivo(int llamadas_semana, int evaluacion) {
    float incentivo = 0;

    // calcular el incentivo según la tabla1
    if (evaluacion >= 6) {
        if (llamadas_semana > 50 && llamadas_semana < 100) {
            incentivo = 1000;
        } else if (llamadas_semana >= 100 && llamadas_semana < 150) {
            incentivo = 1500;
        } else if (llamadas_semana >= 150) {
            incentivo = 2000;
        }
    }

    return incentivo;
}

void imprimirResultados(float salario_bruto, float incentivo, int evaluacion, float salario_neto) {
    // imprimir los resultados
    printf("\n--- Resultados ---\n");
    printf("Salario bruto: C$%.2f\n", salario_bruto);
    if (evaluacion <= 5) {
        printf("Evaluacion recibida: Deficiente - %d\n", evaluacion);
    } else if (evaluacion > 5 && evaluacion <=8) {
        printf("Evaluacion recibida: Aceptable - %d\n", evaluacion);
    } else if (evaluacion > 8 && evaluacion <=10) {
        printf("Evaluacion recibida: Excelente - %d\n", evaluacion);
    } else {
        printf("No valido");
    }

    if (incentivo > 0) {
        printf("Bono/incentivo recibido: C$%.2f\n", incentivo);
    } else {
        printf("El empleado no recibio bono/incentivo por una baja evaluacion de la atencion.\n");
    }
    printf("Salario neto: C$%.2f\n", salario_neto);
}

int main() {
    float salario_bruto, salario_neto, incentivo;
    int evaluacion, llamadas;

    // Ingresar salario bruto, número de llamadas y evaluación
    printf("Ingrese el salario bruto del empleado: ");
    scanf("%f", &salario_bruto);
    printf("Ingrese el numero de llamadas recibidas esta semana: ");
    scanf("%d", &llamadas);
    printf("Ingrese la evaluacion recibida (1-10): ");
    scanf("%d", &evaluacion);

    // Calcular incentivo
    incentivo = calcularIncentivo(llamadas, evaluacion);

    // Calcular salario neto
    salario_neto = salario_bruto + incentivo;

    // Imprimir resultados
    imprimirResultados(salario_bruto, incentivo, evaluacion, salario_neto);

    return 0;
}
