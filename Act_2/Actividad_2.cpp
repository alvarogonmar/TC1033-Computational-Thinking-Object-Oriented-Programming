#include <iostream>
#include <iomanip> // Para configurar el formato de la salida
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// 1
int opcionMain, opcion1;
int n1, n2, valorr;

// 2
int impar;

// 3
int num = 0, sum = 0;

// 4
int terminos, adiciones, SumaArit, n;
float ValorMedia;

// 5
int numRandom, contador = 1, intento;

// 6
double celsius;
int conver;
double incremento;

// Variable
int op;
// Problema 1
float operaNumeros(int x, int y)
{
    cout << "Ingresa\n"
         << "1. Sumar\n"
         << "2. Restar\n"
         << "3. Multiplicar\n";
    cin >> opcion1;

    cout << "Ingresa tus dos valores separados por un espacio: ";
    cin >> x >> y;

    if (opcion1 == 1)
    {
        return x + y;
    }
    else if (opcion1 == 2)
    {
        return x - y;
    }
    else if (opcion1 == 3)
    {
        return x * y;
    }
    return 0;
}
// Problema 2
int numeroImpar()
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

// Problema 3
int sumaPares()
{
    while (num <= 100)
    {
        sum += num;
        num += 2;
    }
    cout << "La suma de todos los numeros pares de 0-100 es: " << sum << endl;
    return 0;
}

// Problema 4
float mediaAritmetica()
{
    cout << "Ingresa la cantidad de terminos con lo que trabajaras: ";
    cin >> terminos;
    for (int i = 0; i < terminos; i++)
    {
        cin >> adiciones;
        SumaArit += adiciones;
        n += 1;
    }
    return (float)SumaArit / n;
}

// Problema 5

int numeroMagico()
{
    numRandom = rand() % 100 + 1;
    cout << "Adivina adivinador, di un numero y adivinaras: ";
    cin >> intento;

    while (intento != numRandom)
    {

        if (intento > numRandom)
        {
            cout << "Tu numero es mayor al numero magico!\n";
        }
        else
        {
            cout << "Tu numero es menor al numero magico!\n";
        }
        cout << "Adivina adivinador, di un numero y adivinaras: ";
        cin >> intento;
        contador += 1;
    }
    cout << "Haz acertado el numero magico= " << numRandom << " despues de= " << contador << " intentos.";
    return 0;
}
// Problema 6
int conversionCelsiusFarenheit()
{
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

int main()
{
    cout << "Ingresa el problema que deseas resolver \n1 operaNumeros \n2 numeroImpar \n3 sumaPares \n4 mediaAritmetica \n5 numeroMagico \n6 conversionCelsiusFarenheit \n7 Terminar \n Tu opcion:  ";
    cin >> op;
    if (op == 1)
    {
        valorr = operaNumeros(n1, n2);
        cout << "El resultado de tu operacion es: " << valorr;
    }
    else if (op == 2)
    {
        numeroImpar();
        return 0;
    }
    else if (op == 3)
    {
        sumaPares();
        return 0;
    }
    else if (op == 4)
    {
        ValorMedia = mediaAritmetica();
        cout << "Tu media de los numeros introducidos es: " << ValorMedia;
    }
    else if (op == 5)
    {
        numeroMagico();
    }
    else if (op == 6)
    {
        conversionCelsiusFarenheit();
        return 0;
    }
    else if (op == 7)
    {
        return 0;
    }
    return 0;
}
