
// Created by Diego Rodriguez on 10/11/25.
// act6 - precio de producto
#include <iostream>
using namespace std;

int main() {
    float precioBase, iva, precioFinal;
    cout << "Introduce el precio base del producto: ";
    cin >> precioBase;
    cout << "Introduce el porcentaje de IVA: ";
    cin >> iva;
    precioFinal = precioBase + (precioBase * iva / 100);
    cout << "El precio del producto con el " <<iva<< "% de IVA es: $" <<precioFinal<< endl;
    return 0;
}