#include <stdio.h>

int main() {
    float precio, subtotal, total;
    int cantidad;
    const float descuento = 0.2; // 20% de descuento
    const float iva = 0.15; // 15% de impuesto al valor agregado
    
    printf("Ingrese el precio del artículo: ");
    scanf("%f", &precio);
    
    printf("Ingrese la cantidad de artículos que va a comprar: ");
    scanf("%d", &cantidad);
    
    if (cantidad >= 2) { // si se compran dos o más artículos, aplicar el descuento
        subtotal = precio * cantidad * (1 - descuento);
    } else {
        subtotal = precio * cantidad;
    }
    
    total = subtotal * (1 + iva); // agregar el impuesto al valor agregado
    
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Impuesto al valor agregado (IVA): $%.2f\n", subtotal * iva);
    printf("Total a pagar: $%.2f\n", total);
    
    return 0;
}
