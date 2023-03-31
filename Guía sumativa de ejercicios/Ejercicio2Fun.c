// Ejercicio #2: “El náufrago satisfecho” ofrece hamburguesas sencillas, dobles y triples, las cuales
// tienen un costo de C$50.00, C$75.00 y C$100.00 respectivamente; considere que se puede
// solicitar más de una hamburguesa. La empresa acepta tarjetas de crédito con un cargo de 5 %
// sobre la compra. Realice un algoritmo para determinar cuánto debe pagar una persona por N
// hamburguesas.

#include <stdio.h>

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

int main() {
    int simples, dobles, triples, cantidad;
    float subtotal, total;
    char metodo_pago;
    
    printf("Ingrese la cantidad de hamburguesas sencillas: ");
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
    
    return 0;
}
