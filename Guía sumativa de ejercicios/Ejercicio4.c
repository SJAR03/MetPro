#include <stdio.h>

int main() {
    float salario_bruto, salario_neto, incentivo = 0;
    int evaluacion, llamadas;

    // Ingresar salario bruto, número de llamadas y evaluación
    printf("Ingrese el salario bruto del empleado: ");
    scanf("%f", &salario_bruto);
    printf("Ingrese el numero de llamadas recibidas esta semana: ");
        scanf("%d", &llamadas);
    printf("Ingrese la evaluacion recibida (1-10): ");
    scanf("%d", &evaluacion);

    //Verificar incentivo de acuerdo al número de llamadas recibidas
    if (evaluacion >=6) {
    if (llamadas > 50 && llamadas < 100) {
            incentivo = 1000;
        } else if (llamadas >= 100 && llamadas < 150) {
            incentivo = 1500;
        } else if (llamadas >= 150) {
            incentivo = 2000;
        }
    }

    // Calcular salario neto
    salario_neto = salario_bruto + incentivo;

    // Imprimir resultados
    printf("\n--- Resultados ---\n");
    printf("Salario bruto: C$%.2f\n", salario_bruto);
    printf("Evaluacion recibida: %d\n", evaluacion);
    if (incentivo > 0) {
        printf("Bono/incentivo recibido: C$%.2f\n", incentivo);
    } else {
        printf("El empleado no recibio bono/incentivo por una baja evaluación de la atención.\n");
    }
    printf("Salario neto: C$%.2f\n", salario_neto);

    return 0;
}
