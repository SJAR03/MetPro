#include <stdio.h>

float calcularSubtotal(int simples, int dobles, int triples) {
    const float precio_simple = 20.0;
    const float precio_doble = 25.0;
    const float precio_triple = 28.0;
    float subtotal = simples * precio_simple + dobles * precio_doble + triples * precio_triple;
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

int main2() {
    int simples, dobles, triples, cantidad;
    float subtotal, total;
    char metodo_pago, opcion;
    
    do {
        printf("Ingrese la cantidad de hamburguesas sencillas: ");
        scanf("%d", &simples);
    
        printf("Ingrese la cantidad de hamburguesas dobles: ");
        scanf("%d", &dobles);
    
        printf("Ingrese la cantidad de hamburguesas triples: ");
        scanf("%d", &triples);
        
        cantidad = simples + dobles + triples;
        if (cantidad == 0) {
            printf("Debe ingresar al menos una hamburguesa.\n");
            continue;
        }
        
        subtotal = calcularSubtotal(simples, dobles, triples);
    
        printf("\nEl precio total es: C$%.2f\n", subtotal);
    
        printf("¿Como desea pagar? (E)fectivo o (T)arjeta (Ingrese 't' para usar la funcion de tarjeta): ");
        scanf(" %c", &metodo_pago);
    
        total = calcularTotal(subtotal, metodo_pago);
    
        printf("\nTotal a pagar: C$%.2f\n", total);
        
        printf("¿Desea realizar otra compra? (S)i o (N)o: ");
        scanf(" %c", &opcion);
    } while (opcion != 'N' && opcion != 'n');
    
    return 0;
}