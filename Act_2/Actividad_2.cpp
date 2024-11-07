#include <iostream>
using namespace std;

// Variables

int main()
{
    cout << "Ingresa el problema que deseas resolver \n1 operaNumeros \n2 numeroImpar \n3 sumaPares \n4 mediaAritmetica \n5 numeroMagico \n6 conversionCelsiusFarenheit ";
    // int operaNumeros()
    // {
    //     int sum, res, multi, n1, n2;
    //     cout << "Ingrese \n1 Si desea sumar los numeros \n2 si desea restar los numeros \n3 si desea multiplicar los numeros";

    //     if

    //         cout
    //         << "Ingrese el numero 1";
    //     cin >> n1;
    //     cout << "Ingrese el numero 2";
    //     cin >> n2;
    //     if
    // }
    return 0;
}

int numeroImpar()
{
    int impar;
    cout << "Ingrese un numero impar: ";
    cin >> impar;
    if (impar % 2 != 0)
    {
        cout << "Tu numero " << impar << " es impar" << endl;
    }
    else
    {
        cout << "Tu numero " << impar << " no es impar, favor de introducir un numero impar" << endl;
    }

    return 0;
}
