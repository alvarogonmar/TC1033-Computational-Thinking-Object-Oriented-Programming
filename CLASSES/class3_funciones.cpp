#include <iostream>
using namespace std;

// Declaracion de funcion
int Suma(int, int);

// Caso 1. Entradas y salidas
int main()
{
    int a, b;
    cout << "Dame un valor para a: ";
    cin >> a;
    cout << "Dame un valor para b: ";
    cin >> b;
    int resultado = Suma(a, b); // Llamar la funcion
    return 0;
}
int Suma(int a, int b)
{
    int c;
    c = a + b;
}