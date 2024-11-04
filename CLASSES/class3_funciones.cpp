#include <iostream>
using namespace std;

// Declaracion de funcion

// int Suma(int, int);

// Caso 1. Entradas y salidas
/* int main()
{
    int a, b;
    cout << "Dame un valor para a: ";
    cin >> a;
    cout << "Dame un valor para b: ";
    cin >> b;
    int resultado = Suma(a, b); // Llamar la funcion
    cout << resultado << endl;
    return 0;
}
int Suma(int a, int b)
{
    int c;
    c = a + b;
    return c;
} */

/* int Suma(int a, int b) // DECLARAR Y PONER LA FUNCION
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout << "Dame un valor para a: ";
    cin >> a;
    cout << "Dame un valor para b: ";
    cin >> b;
    int resultado = Suma(a, b); // Llamar la funcion
    cout << resultado << endl;
    return 0;
} */

// Caso 2: Sin parametros de entrada
int Suma() // DECLARAR Y PONER LA FUNCION
{
    int a, b, c;
    cout << "Dame un valor para a: ";
    cin >> a;
    cout << "Dame un valor para b: ";
    cin >> b;
    c = a + b;
    return c;
}
int main()
{
    int resultado = Suma(); // Llamar la funcion
    cout << resultado << endl;
    return 0;
}