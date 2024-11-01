// Problema 5 diseña y codifica una aplicación que realice operaciones aritméticas
#include <iostream>
using namespace std;

int main()
{
    float n1, n2;

    cout << "Introduce el valor de tu primer numero: ";
    cin >> n1;
    cout << "Introduce el valor de tu segundo numero: ";
    cin >> n2;

    cout << "El resultado de sumar " << n1 << " y " << n2 << " es de: " << n1 + n2 << endl;
    cout << "El resultado de restar " << n1 << " y " << n2 << " es de: " << n1 - n2 << endl;
    cout << "El resultado de multiplicar " << n1 << " y " << n2 << " es de: " << n1 * n2 << endl;
    cout << "El resultado de dividir " << n1 << " y " << n2 << " es de: " << n1 / n2 << endl;
    cout << "El resultado del modulo de " << n1 << " y " << n2 << " es de: " << static_cast<int>(n1) % static_cast<int>(n2) << endl;
    return 0;
}