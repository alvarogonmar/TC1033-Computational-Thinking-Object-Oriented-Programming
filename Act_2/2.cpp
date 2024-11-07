#include <iostream>
using namespace std;
int impar;
int main()
{
    while (true)
    {
        cout << "Ingrese un numero impar: ";
        cin >> impar;
        if (impar % 2 != 0)
        {
            cout << "Tu numero " << impar << " es impar" << endl;
            break;
        }
        else
        {
            cout << "Tu numero " << impar << " no es impar, favor de introducir un numero impar" << endl;
        }
    }

    return 0;
}