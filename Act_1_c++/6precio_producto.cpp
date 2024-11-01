// Problema 6 diseña y codifica una aplicación que Calcule el precio de un producto
#include <iostream>
using namespace std;

int main()
{
    float precio_base, iva, final_precio;

    cout << "Introduce el precio base del producto: ";
    cin >> precio_base;
    cout << "Introduce el % IVA aplicado: ";
    cin >> iva;

    final_precio = (precio_base * iva) / 100 + precio_base;

    cout.precision(5);
    cout << "El precio del producto con el: " << iva << " de IVA es: " << final_precio;

    return 0;
}