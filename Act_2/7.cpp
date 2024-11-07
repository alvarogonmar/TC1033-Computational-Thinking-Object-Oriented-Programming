#include <iostream>
using namespace std;

void serieAritmetica(int a, int d, int n)
{
    int suma = 0;

    for (int i = 1; i <= n; i++)
    {
        int termino = a + (i - 1) * d;
        cout << "Termino " << i << ": " << termino << endl;
        suma += termino;
    }
    cout << "Valor total de la serie: " << suma << endl;
}

int main()
{
    int a = 1;
    int d = 3;
    int n = 25;

    serieAritmetica(a, d, n);
    return 0;
}
