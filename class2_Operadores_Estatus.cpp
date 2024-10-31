// Programa que realice todas las operaciones

#include <iostream>
#include <cmath>
using namespace std;
// int main()
// {
//     int a = 10, b = 3;

//     // Suma
//     cout << "El resultado de la suma es: " << a + b << endl;

//     // Resta
//     cout << "El resultado de la resta es: " << a - b << endl;

//     // Multiplicacion
//     cout << "El resultado de la multiplicaion es: " << a * b << endl;

//     // Division
//     cout << "El resultado de la division entera es" << a / b << endl; // Al poner una sola / diagonal

//     // Potencia
//     cout << "El retulado de la potencia es: " << pow(a, b) << endl;

//     // Division
//     cout << "El resultado de la division es: " << float(a) / b << endl;

//     // Divison
//     cout << "El resultado de la division es: " << a / float(b) << endl;

//     // Resultado en float
//     cout << "El resultado de la division es: " << float(a / b) << endl;

//     return 0;
// }

// Operadores relacionales
/* int main()
{
    cout << (34 > 35) << endl;
    cout << (34 < 35) << endl;
    cout << (200 == 200) << endl;
    cout << (200 != 200) << endl;
    cout << (34 >= 23) << endl;
    cout << (45 <= 45) << endl;

    // Operadores logicos
    cout << ((34 == 34) && (20 < 30)) << endl;
    cout << ((20 < 30) || (10 > 20)) << endl;
    cout << !(20 == 20) << endl;
    return 0;
} */

// Operadores Estatuto Condicional
int main()
{
    int a;
    cout << "Escribe un numero: " << endl;
    cin >> a;
    if (a > 3)
    {
        cout << "a es mayor a 3" << endl;
    }
    else if (a == 3)
    {
        cout << "a es igual a 3" << endl;
    }
    else
    {
        cout << "a es menor a 3" << endl;
    }
    return 0;
}
