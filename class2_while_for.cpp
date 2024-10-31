#include <iostream>
#include <cmath>
using namespace std;

// WHILE
/* int main()
{
    int i = 0;
    while (i < 20)
    {
        cout << ++i << endl;
        if (i == 4)
        {
            break; TERMINAR EL CICLO
        }
    }
    return 0;
} */

// FOR
/* int main()
{
    for (int i = 0; i < 10; i += 2)
    {
        cout << i << endl;
    }
    return 0;
} */

// Do while
int main()
{
    int a = 20;
    do
    {
        cout << a << endl;
        a++;
    } while ((a >= 21) && (a < 30));

    cout << "Con while" << endl;
    a = 20;
    while ((a >= 21) && (a < 30))
    {
        cout << a << endl;
        a++;
    }
    return 0;
}