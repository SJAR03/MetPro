// Ejercicio #3: Calcule el salario neto de un trabajador tomando en cuenta la tabla del I.R. (Impuesto
// sobre la Renta) y el Seguro Social (6.25% del salario antes de la deducción del IR).

#include <stdio.h>

float calcularSeguroSocial(float salario) {
    return salario * 0.0625;
}

float calcularIR(float salario) {
    float seguro_social = calcularSeguroSocial(salario);
    float base_imponible = salario - seguro_social;
    float salario_anual = base_imponible * 12;
    float impuesto_base, porcentaje, sobre_exceso;
    
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
    
    return (salario_anual - sobre_exceso) * (porcentaje + impuesto_base) / 12;
}

float calcularSalarioNeto(float salario) {
    float seguro_social = calcularSeguroSocial(salario);
    float IR = calcularIR(salario);
    
    return salario - seguro_social - IR;
}

int main() {
    float salario;
    
    printf("Ingrese el salario mensual del trabajador: ");
    scanf("%f", &salario);
    
    float seguro_social = calcularSeguroSocial(salario);
    float IR = calcularIR(salario);
    float salario_neto = calcularSalarioNeto(salario);
    
    printf("\nEl impuesto es: C$%.3f\n", IR);
    printf("El seguro social es: C$%.2f\n", seguro_social);
    printf("\nEl salario neto del trabajador es: C$%.3f\n", salario_neto);
    
    return 0;
}
