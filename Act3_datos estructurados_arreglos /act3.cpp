#include <iostream>
#include <cstdlib> // Para rand y srand
#include <iomanip> // Para std::setprecision
using namespace std;

int problema_1()
{
    int arrayy[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i < 10; i++)
    {
        cout << "Valor: " << arrayy[i] << " Indice " << i << endl;
    }
    return 0;
}

void problema_2()
{
    int array2[10] = {};
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un valor para el indice: " << i << endl;
        cin >> array2[i];
        suma += array2[i];
    }
    cout << "El total de la suma de tus elementos es igual a: " << suma << endl;
}

void problema_3()
{
    int array3[50];
    int suma = 0;
    srand(time(0));

    for (int i = 0; i < 50; i++)
    {
        array3[i] = rand() % 200 + 1;
        suma += array3[i];
    }
    float promedio = static_cast<float>(suma) / 50;
    cout << "El promedio de los valores aleatorios es: " << fixed << setprecision(2) << promedio << endl;
}
int main()
{
    problema_1();
    problema_2();
    problema_3();
    return 0;
}