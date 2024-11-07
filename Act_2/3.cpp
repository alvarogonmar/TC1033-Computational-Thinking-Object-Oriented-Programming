#include <iostream>
using namespace std;

int num = 0, sum = 0;

int main()
{
    while (num <= 100)
    {
        sum += num;
        num += 2;
    }
    cout << "La suma de todos los numeros pares de 0-100 es: " << sum << endl;
    return 0;
}