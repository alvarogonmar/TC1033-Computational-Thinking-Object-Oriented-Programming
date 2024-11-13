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

int main()
{
    problema_1();
    return 0;
}