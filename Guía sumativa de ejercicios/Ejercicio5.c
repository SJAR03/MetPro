#include <stdio.h>
#include <stdlib.h>

// Prototipo de funciones
//Ejercicio 1
void calcularPrecio();
float calcular_subtotal(float precio, int cantidad, const float descuento);
float calcular_total(float subtotal, const float iva);
// void mostrar_resultados(float subtotal, const float iva, float total);

//Ejercicio 2
void naufragoHamburgesas();
float calcularSubtotal(int simples, int dobles, int triples);
float calcularTotal(float subtotal, char metodo_pago);

//Ejercicio 3
void salarioIRSeguroSocial();
float calcularSeguroSocial(float salario);
float calcularIR(float salario);
float calcularSalarioNeto(float salario);

//Ejercicio 4
void bonoEmpresa();
float calcularIncentivo(int llamadas_semana, int evaluacion);
// void imprimirResultados(float salario_bruto, float incentivo, int evaluacion, float salario_neto);


int main() {
    int opcion;

    do {
        printf("\nSeleccione un algoritmo para ejecutar:\n");
        printf("1. Calcular precio de venta\n");
        printf("2. Calcular precio de hamburguesas de 'El naufrago satisfecho'\n");
        printf("3. Calcular salario neto teniendo en cuenta el IR y el Seguro Social\n");
        printf("4. Calcular bono recibido por empleado segun llamadas recibidas y la evaluacion de atencion\n");
        printf("0. Salir\n");
        printf("Opcion #: ");

        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                calcularPrecio();
                break;
            case 2:
                naufragoHamburgesas();
                break;
            case 3:
                salarioIRSeguroSocial();
                break;
            case 4:
                bonoEmpresa();
                break;
            case 0:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
        }
    } while(opcion != 0);

    return 0;
}
/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 1======================
   ============================================================================== */
void calcularPrecio() {
    float precio, subtotal, total;
    int cantidad;
    const float descuento = 0.2; // 20% de descuento
    const float iva = 0.15; // 15% de impuesto al valor agregado

    printf("\n--- Calcular precio de venta ---\n");

    printf("\nIngrese el precio del articulo: ");
    scanf("%f", &precio);

    printf("Ingrese la cantidad de articulos que va a comprar: ");
    scanf("%d", &cantidad);

    subtotal = calcular_subtotal(precio, cantidad, descuento);

    total = calcular_total(subtotal, iva);

    printf("\nSubtotal: $%.2f\n", subtotal);
    printf("Impuesto al valor agregado (IVA): $%.2f\n", subtotal * iva);
    printf("Total a pagar: $%.2f\n", total);
    printf("\n--- Calcular precio de venta ---\n");
}

float calcular_subtotal(float precio, int cantidad, const float descuento) {
    if (cantidad >= 2) {
        return precio * cantidad * (1 - descuento);
    } else {
        return precio * cantidad;
    }
}

float calcular_total(float subtotal, const float iva) {
    return subtotal * (1 + iva);
}

// void mostrar_resultados(float subtotal, const float iva, float total) {
//     printf("\nSubtotal: $%.2f\n", subtotal);
//     printf("Impuesto al valor agregado (IVA): $%.2f\n", subtotal * iva);
//     printf("Total a pagar: $%.2f\n", total);
//     printf("\n--- Calcular precio de venta ---\n");
// }

/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 1======================
   ============================================================================== */


/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 2======================
   ============================================================================== */
void naufragoHamburgesas() {
    int simples, dobles, triples, cantidad;
    float subtotal, total;
    char metodo_pago;

    printf("\n--- Calcular precio de hamburguesas de 'El naufrago satisfecho' ---\n");
    
    printf("\nIngrese la cantidad de hamburguesas sencillas: ");
    scanf("%d", &simples);
    
    printf("Ingrese la cantidad de hamburguesas dobles: ");
    scanf("%d", &dobles);
    
    printf("Ingrese la cantidad de hamburguesas triples: ");
    scanf("%d", &triples);
    
    cantidad = simples + dobles + triples;
    subtotal = calcularSubtotal(simples, dobles, triples);
    
    printf("\nEl precio total es: C$%.2f\n", subtotal);
    
    printf("¿Como desea pagar? (E)fectivo o (T)arjeta (Ingrese 't' para usar la funcion de tarjeta): ");
    scanf(" %c", &metodo_pago);
    
    total = calcularTotal(subtotal, metodo_pago);
    
    printf("\nTotal a pagar: C$%.2f\n", total);

    printf("\n--- Calcular precio de hamburguesas de 'El naufrago satisfecho' ---\n");
}

float calcularSubtotal(int simples, int dobles, int triples) {
    float subtotal = simples * 50 + dobles * 75 + triples * 100;
    return subtotal;
}

float calcularTotal(float subtotal, char metodo_pago) {
    const float cargo_tarjeta = 0.05; // 5% de cargo por pago con tarjeta
    float total;
    if (metodo_pago == 'T' || metodo_pago == 't') {
        total = subtotal + subtotal * cargo_tarjeta;
        printf("Cargo por pago con tarjeta de credito: C$%.2f\n", subtotal * cargo_tarjeta);
    } else {
        total = subtotal;
    }
    return total;
}
/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 2======================
   ============================================================================== */


/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 3======================
   ============================================================================== */
void salarioIRSeguroSocial() {
     float salario;
    
    printf("\n--- Calcular salario neto teniendo en cuenta el IR y el Seguro Social ---\n");

    printf("\nIngrese el salario mensual del trabajador: ");
    scanf("%f", &salario);
    
    float seguro_social = calcularSeguroSocial(salario);
    float IR = calcularIR(salario);
    float salario_neto = calcularSalarioNeto(salario);
    
    printf("\nEl impuesto es: C$%.3f\n", IR);
    printf("El seguro social es: C$%.2f\n", seguro_social);
    printf("\nEl salario neto del trabajador es: C$%.3f\n", salario_neto);

    printf("\n--- Calcular salario neto teniendo en cuenta el IR y el Seguro Social ---\n");
}

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
/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 3======================
   ============================================================================== */


/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 4======================
   ============================================================================== */
void bonoEmpresa() {
    float salario_bruto, salario_neto, incentivo;
    int evaluacion, llamadas;

    printf("\n--- Calcular bono recibido por empleado segun llamadas recibidas y la evaluacion de atencion ---\n");

    // Ingresar salario bruto, número de llamadas y evaluación
    printf("\nIngrese el salario bruto del empleado: ");
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
    printf("\nSalario bruto: C$%.2f\n", salario_bruto);
    
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

    printf("\n--- Calcular bono recibido por empleado segun llamadas recibidas y la evaluacion de atencion ---\n");

}

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

// void imprimirResultados(float salario_bruto, float incentivo, int evaluacion, float salario_neto) {
//     // imprimir los resultados
//     printf("\nSalario bruto: C$%.2f\n", salario_bruto);
//     printf("Evaluacion recibida: %d\n", evaluacion);
//     if (incentivo > 0) {
//         printf("Bono/incentivo recibido: C$%.2f\n", incentivo);
//     } else {
//         printf("El empleado no recibio bono/incentivo por una baja evaluacion de la atencion.\n");
//     }
//     printf("Salario neto: C$%.2f\n", salario_neto);

//     printf("\n--- Calcular bono recibido por empleado segun llamadas recibidas y la evaluacion de atencion ---\n");

// }
/* ==============================================================================
   ======================FUNCIONES Y CALCULO DE EJERCICIO 4======================
   ============================================================================== */
