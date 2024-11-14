// Alvaro Gonzalez Martinez A016463431

#include <iostream>
#include <cstdlib> // Para rand y srand
#include <iomanip> // Para poner solo los decimales que quiero std::setprecision
using namespace std;

int problema_1() // Funcion que nos imprime los valores de un array con sus respectivos índices

{
    int arrayy[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Definir el array con los valores que le doy
    for (int i = 0; i < 10; i++)                                // For que sirve para iterar sobre cada elemento del array hasta que sea menor a 10
    {
        cout << "Valor: " << arrayy[i] << " Indice " << i << endl; // Imprimir el valor con su indice
    }
    return 0;
    // Caso de prueba: Esta funcion no necesita entrada, solamente imprime los valores de 10 a 100 y sus indices del 0 al 9.
}

void problema_2() // Funcion que nos permite ingresar valores en un array y luego suma los valores dados
{
    int array2[10] = {}; // Crear un array que va contener 10 elementos iniciando en 0
    int suma = 0;        // Variable tipo int para almacenar la suma total

    for (int i = 0; i < 10; i++) // for que sirve para iterar sobre cada elemento del array, hasta que sea menor a 10
    {
        cout << "Ingrese un valor para el indice: " << i << endl; // Pedir al usuario que le de un valor a cada indice
        cin >> array2[i];                                         // Guardar el valor que el usuario intrudijo en el array en su respectivo indice
        suma += array2[i];                                        // Sumar el valor al total
    }
    cout << "El total de la suma de tus elementos es igual a: " << suma << endl; // Imprimir en pantalla el total de la suma
    cout << "Contenido del array: ";
    for (int i = 0; i < 10; i++) // for para iterar cada elemento del array
    {
        cout << array2[i] << " "; // imprimir el contenido del array separado por un espacio
    }
    cout << endl; // cout para salto de linea al terminar de imprimir el contenido del array

    // Caso de prueba: Se pide que el usario ingrese un numero por cada indice (0-9)
    // Si el usuario introduce los valores (10,20,30,40,50,60,70,80,90,100) la suma total deberia ser 550
}

void problema_3() // Funcion que genera un array de valores aleatorios y calcula su promedio

{
    int array3[50]; // Crear el array de 50 elementos
    int suma = 0;   // Variable tipo int para la suma total de los valores
    srand(time(0)); // Configurar el reinicio de los numeros aleatorios, asi cada que se corra el programa cambian.

    for (int i = 0; i < 50; i++) // for que sirve para poner todos los numeros aleatorios en el array.
    {
        array3[i] = rand() % 200 + 1; // Genera un numero aleatorio entre 1 y 200
        suma += array3[i];            // Añade el numero aleatorio generado antes a la variable suma total
    }
    float promedio = static_cast<float>(suma) / 50;                                                       // Calcula el promedio pero este se convierte a float
    cout << "El promedio de los valores aleatorios es: " << fixed << setprecision(2) << promedio << endl; // Imprimir en consola el promedio solamente con 2 decimales(setprecision)
    // Caso de prueba:
    // Dado que siempre los valores son aleatorios, cada ejecucion dara un promedio distinto. Pero aqui un ejemplo
    // Digamos que los numeros aleatorios son de 1 a 50, si estos se sumaran dan como resultado 1275, dividiendo eso entre los 50 numeros del array
    // el promedio seria igual a 25.50
}

void problema_4() // Funcion que encuentra y retorna el valor maximo junto con su indice en un array de valores aleatorios

{
    int array4[25];       // Crear el array de 25 elementos
    int valor_max = 0;    // Variable tipo int para el valor maximo, iniciada en 0
    int posicion_max = 0; // Variable tipo int para la posicion del valor maximo
    srand(time(0));       // Configurar el reinicio de los numeros aleatorios, asi cada que se corra el programa cambian.

    for (int i = 0; i < 25; i++) // for que sirve para llenar el array con los numeros aleatorios, hasta que i sea menor que 25
    {
        array4[i] = rand() % 500 + 1; // Genera un valor aleatorio entre 1 y 500
        if (array4[i] > valor_max)    // if que sirve para verificar si el valor es mayor al valor maximo actual
        {
            valor_max = array4[i]; // Actualizar valor maximo
            posicion_max = i;      // Guarda la posicion del nuevo valor maximo
        }
    }
    cout << "El valor mas grande del array es: " << valor_max << " en la posicion: " << posicion_max << endl; // imprimir en pantalla cual es el valor mas grande del array junto con su posicion

    for (int i = 0; i < 25; i++) // for que sirve para imprimir en consola todos los valores del array
    {
        cout << "Valor: " << array4[i] << " - Posicion: " << i << endl;
    }
    // Caso de prueba: Como los valores siempre son aleatorios, cada ejecucion generara un valor y posición maxima diferente
    // Pero aqui un ejemplo:
    // Si hace el array, y el valor maximo encontrado es 199 en posicion 20, nos retornara ese valor junto con su posicion.
}

void problema_5() // Funcion que mide el tamaño de la frase y la imprime en consola caracter por caracter

{
    string frase = "Pensamiento Computacional Orientado a Objetos"; // Declarar variable tipo string llamada frase, con la frase que se medira

    int len = 0;                      // Variable tipo int para almacenar la longitud de la frase
    for (; frase[len] != '\0'; len++) // for que sirve para contar cada caracter hasta encontrar el final ('\0')
    {
        // no necesita nada, simplemente es para contar los caracteres
    }
    cout << "El tamanio de  la frase es: " << len << endl; // imprimir en consola el tamaño de la frase

    for (int i = 0; i < len; i++) // for que sirve ara imprimir en una linea diferente cada caracter de la frase, se itera hasta que i sea menor que len.
    {
        cout << frase[i] << endl; // imprimir en consola cada caracter
    }
}

int main() // funcion principal donde se llaman todas las funciones anteriores para que se ejecuten
{
    problema_1();
    problema_2();
    problema_3();
    problema_4();
    problema_5();
    return 0;
}