#include <stdio.h>

int main() {
    int simples, dobles, triples, cantidad;
    float subtotal, total;
    char metodo_pago;
    const float cargo_tarjeta = 0.05; // 5% de cargo por pago con tarjeta
    
    printf("Ingrese la cantidad de hamburguesas sencillas: ");
    scanf("%d", &simples);
    
    printf("Ingrese la cantidad de hamburguesas dobles: ");
    scanf("%d", &dobles);
    
    printf("Ingrese la cantidad de hamburguesas triples: ");
    scanf("%d", &triples);
    
    cantidad = simples + dobles + triples;
    subtotal = simples * 50 + dobles * 75 + triples * 100;
    
    printf("\nEl precio total es: C$%.2f\n", subtotal);
    
    printf("¿Como desea pagar? (E)fectivo o (T)arjeta (Ingrese 't' para usar la funcion de tarjeta): ");
    scanf(" %c", &metodo_pago);
    
    if (metodo_pago == 'T' || metodo_pago == 't') {
        total = subtotal + subtotal * cargo_tarjeta;
        printf("Cargo por pago con tarjeta de credito: C$%.2f\n", subtotal * cargo_tarjeta);
    } else {
        total = subtotal;
    }
    
    printf("\nTotal a pagar: C$%.2f\n", total);
    
    return 0;
}
