// Problema 8 Promedio calificaciones
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float c1, c2, c3, promedio;
    string alumno;

    cout << "Introduce el nombre del alumno: ";
    cin >> alumno;

    cout << "Introduce la primera calificacion: ";
    cin >> c1;
    cout << "Introduce la segunda calificacion: ";
    cin >> c2;
    cout << "Introduce la tercera calificacion: ";
    cin >> c3;

    promedio = (c1 + c2 + c3) / 3;
    cout.precision(2);
    cout << "El promedio de: " << alumno << " es: " << promedio << endl;
    return 0;
}