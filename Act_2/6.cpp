#include <iostream>
#include <iomanip> // Para configurar el formato de la salida
using namespace std;

int main()
{
    double celsius;
    int conver;
    double incremento;

    cout << "Ingrese los grados en Celsius: ";
    cin >> celsius;
    cout << "Ingrese el numero de conversiones: ";
    cin >> conver;
    cout << "Ingrese el incremento entre los valores Celsius: ";
    cin >> incremento;

    cout << "\nConversión de grados Celsius a Fahrenheit" << endl;
    cout << "FAHRENHEIT\tCELSIUS" << endl;

    for (int i = 0; i < conver; ++i)
    {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        cout << fixed << setprecision(2) << fahrenheit << "\t\t" << celsius << endl;
        celsius += incremento;
    }

    return 0;
}
