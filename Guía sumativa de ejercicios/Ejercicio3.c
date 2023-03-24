#include <stdio.h>

int main() {
    // Definimos las variables necesarias
    float salario, impuesto_base, porcentaje, sobre_exceso, IR, salario_neto, seguro_social, base_imponible, salario_anual, total_deduccion;
    
    // Solicitamos el salario del trabajador
    printf("Ingrese el salario mensual del trabajador: ");
    scanf("%f", &salario);
    
    // Calculamos el Seguro Social (6.25% del salario antes de la deducción del IR)
    seguro_social = salario * 0.0625;

    //Calcula la base imponible, es que el salario mensual - el seguro social
    base_imponible = salario - seguro_social;

    //Calculo el salario anual una vez deducido el seguro social, debido que es necesario para calcular el IR
    salario_anual = base_imponible * 12;
    
    // Calculamos el impuesto según la tabla del I.R.
    if (salario_anual <= 100000.00) {
        impuesto_base = 0.00;
        porcentaje = 0.00;
        sobre_exceso = 0.00;
    } else if (salario_anual <= 200000.00) {
        impuesto_base = 0.00;
        porcentaje = 0.15;
        sobre_exceso = 100000.00;
    } else if (salario_anual <= 350000.00) {
        impuesto_base = 15000.00;
        porcentaje = 0.20;
        sobre_exceso = 200000.00;
    } else if (salario_anual <= 500000.00) {
        impuesto_base = 45000.00;
        porcentaje = 0.25;
        sobre_exceso = 350000.00;
    } else {
        impuesto_base = 82500.00;
        porcentaje = 0.30;
        sobre_exceso = 500000.00;
    }
    
    //Calculamos el IR (Impuesto sobre la Venta)
    IR = (salario_anual - sobre_exceso) * (porcentaje + impuesto_base) / 12;
    
    //Calculamos la deducción total que se hará al salario del trabajador
    total_deduccion = IR + seguro_social;

    // Calculamos el salario neto del trabajador
    salario_neto = salario - total_deduccion;
    
    // Mostramos el salario neto del trabajador
    printf("\nEl impuesto es: C$%.3f\n", IR);
    printf("El seguro social es: C$%.2f\n", seguro_social);
    printf("\nEl salario neto del trabajador es: C$%.3f\n", salario_neto);
    
    return 0;
}
