#include <iostream>
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
int main()
{
    problema_1();
    problema_2();
    return 0;
}