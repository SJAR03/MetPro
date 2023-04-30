#include <stdio.h>

struct dispositivo {
    char nombre[20];
    float precio;
    int stock;
};

void struct1() {
    // inicializar los datos de los dispositivos
    struct dispositivo celulares = {"Samsung Galaxy S21", 849.99, 100};
    struct dispositivo tablets = {"iPad Pro", 1099.00, 50};
    struct dispositivo smart_tv = {"LG OLED C1", 1499.99, 20};
    struct dispositivo laptops = {"Dell XPS 13", 1299.99, 75};

    // imprimir la información de los dispositivos en forma de tabla
    printf("\n%-20s %10s %10s\n", "Dispositivo", "Precio", "Stock");
    printf("%-20s %10.2f %10d\n", celulares.nombre, celulares.precio, celulares.stock);
    printf("%-20s %10.2f %10d\n", tablets.nombre, tablets.precio, tablets.stock);
    printf("%-20s %10.2f %10d\n", smart_tv.nombre, smart_tv.precio, smart_tv.stock);
    printf("%-20s %10.2f %10d\n", laptops.nombre, laptops.precio, laptops.stock);

}

// int main(){
//   struct1();

//   return 0;
// }