#include <iostream>
using namespace std;

double calif1, calif2, calif3;
double calif_total;

int operacion()
{
    calif_total = (calif1 * 0.3) + (calif2 * 0.3) + (calif3 * 0.4);
    return calif_total;
}
int main(void)
{
    cout << "Ingrese la nota 1: ";
    cin >> calif1;
    cout << "Ingrese la nota 2: ";
    cin >> calif2;
    cout << "Ingrese la nota 3: ";
    cin >> calif3;
    double notafinal = operacion();
    cout << "La nota final es: " << notafinal;
    return 0;
}