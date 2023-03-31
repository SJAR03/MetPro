// Ejercicio #1: Realice un algoritmo para determinar cuánto pagará una persona en una tienda por
// un artículo, considerando que tiene un descuento del 20% cuando se compran dos o más
// ejemplares del artículo. Recuerde calcular el 15% de I.V.A (Impuesto al Valor Agregado), el
// subtotal y el total a pagar.

#include <stdio.h>

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

void mostrar_resultados(float subtotal, const float iva, float total) {
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Impuesto al valor agregado (IVA): $%.2f\n", subtotal * iva);
    printf("Total a pagar: $%.2f\n", total);
}

int main() {
    float precio, subtotal, total;
    int cantidad;
    const float descuento = 0.2; // 20% de descuento
    const float iva = 0.15; // 15% de impuesto al valor agregado
    
    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);
    
    printf("Ingrese la cantidad de articulos que va a comprar: ");
    scanf("%d", &cantidad);
    
    subtotal = calcular_subtotal(precio, cantidad, descuento);
    
    total = calcular_total(subtotal, iva);
    
    mostrar_resultados(subtotal, iva, total);
    
    return 0;
}
