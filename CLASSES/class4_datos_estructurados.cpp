#include <iostream>
using namespace std;

/* void Suma(int numeros[], int tamanio)
{
    int contador = 0;
    for (int j = 0; j < tamanio; j++)
    {
        contador += numeros[j];
    }
    cout << contador << endl;
}
int main()
{
    int numeros[4];
    int Num[] = {4, 5, 6, 7};
    string Texto[3] = {"Pollo", "gallina", "perro"};
    cout << "El array de texto en la posicion 2 es: " << Texto[2] << endl;
    cout << Texto << endl; // Da codigo donde empieza a guardarlo

    // Mostar en consola lo que tiene el arreglo Texto
    for (int i = 0; i < 3; i++)
    {
        cout << Texto[i] << endl;
    }
    // Darle valores al array numeros
    for (int i = 0; i < 4; i++)
    {
        cout << "Dame un numero para la posicion: " << i << endl;
        cin >> numeros[i];
    }
    Suma(numeros, 4);
    return 0;
} */

/* void imprimir(int Matrizz[3][4], int renglon, int columna)
{
    for (int i = 0; i < 3; i++) // Renglones
    {
        for (int j = 0; j < 4; j++) // Columnas
        {
            cout << Matrizz[i][j] << "\t";
        }
        cout << "\n"
             << endl;
    }
}
int main()
{
    int Matriz[][3] = {{1, 2, 3},
                       {4, 5, 6}};
    int Mat[3][4];
    for (int i = 0; i < 3; i++) // Renglones
    {
        for (int j = 0; j < 4; j++) // Columnas
        {
            cout << "Posicion " << i << " " << j << endl;
            cin >> Mat[i][j];
        }
    }
    imprimir(Mat, 3, 4); // Llamar la funcion
    return 0;
}*/

int main()
{
    char Palabras[] = {'H', 'O', 'L', 'A'};    // Array de CARACTERES
    char texto[] = {'H', 'O', 'L', 'A', '\0'}; // Cadena de caracteres string
    char nombre[20];
    char apellido[20];

    cout << sizeof(Palabras) << endl;
    int num[] = {6, 7, 8, 9};
    cout << sizeof(num) / sizeof(num[0]) << endl;
    cout << sizeof(nombre) / sizeof(nombre[0]) << endl;
    cout << "Dame tu nombre y apellido separado por espacio: " << endl;
    cin >> nombre >> apellido;
    cout << nombre << " " << apellido;

    return 0;
}