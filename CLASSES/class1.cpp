#include <iostream>  // Directiva de procesamiento, cargar biblioteca iostream
using namespace std; // Espacio de trabajo.
int main()
{ // Funcion principal
    // Declaramos variables
    int numero;
    string palabra;
    cout << "Dame un numero: ";
    cin >> numero;
    cout << "Dame una palabra: ";
    cin >> palabra;
    cout << "El numero es: " << numero << "\nLa palabra es: "
         << palabra << endl;
    return 0;
}