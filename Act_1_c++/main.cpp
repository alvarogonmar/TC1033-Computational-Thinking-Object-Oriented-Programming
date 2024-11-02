// ACTIVIDAD 1.

/****** IMPORTANTE ******/
/****** EL CODIGO COMENTADO FUE EL QUE PUSE EN EL ENTREGABLE PDF, PERO PARA QUE SE PUDIERA CORRER EL PROGRAMA, LO PUSE TODO EN UNA SOLA FUNCION, HASTA ABAJO DE ESTE CODIGO *****/

// Problema 1 Codifica tu propia aplicacion que muestre en consola "Hola mundo c++"

/* #include <iostream>  // Directiva de procesamiento, cargar biblioteca iostream
using namespace std; // Espacio de trabajo

int main() // Funcion principal
{
    cout << "Hello World c++" << endl; // Imprimir Hello World en consola y terminar la linea
    return 0;                          // Devolver 0, indica que el programa terminó
}

// Problema 2 Declara y Asigna:
#include <iostream>  // Directiva de procesamiento, cargar biblioteca iostream
using namespace std; // Espacio de trabajo.

int main() // Funcion principal
{
    int n1 = 2, n2 = 4, suma;                          // Declarar las tres variables enteras y asignarle los valores a n1 y n2
    suma = n1 + n2;                                    // Calcular la suma de n1 y n2 guardando el resultado en la variable suma
    cout << "La suma de n1 y n2 es: " << suma << endl; // Imprimir el resultado en consola
    return 0;                                          // Devolver 0, indica que el programa terminó
}

// Problema 3 Area de un Rectangulo. Aplicacion que cacula el area de un rectangulo
#include <iostream>  // Incluir biblioteca iostream para la entrada y salida de datos
using namespace std; // Espacio de trabajo

int main() // Funcion principal
{
    float area, base = 5, altura = 10;                                                                                                     // Declarar las 3 variables tipo float, asignandole valores a base y alura
    area = base * altura;                                                                                                                  // Calcular el area del rectangulo, guardando el resultado en la variable area
    cout << "El area del rectangulo con las medidas de: " << base << " de base y " << altura << " de altura es igual a: " << area << endl; // Imprimir el resultado en consola
    return 0;                                                                                                                              // Devolver 0, indica que el programa terminó
}

// Problema 4 Uso de Cadenas (string): Aplicacion que utilice variables tipo string
#include <iostream>  // Incluir biblioteca iostream para la entrada y salida de datos
#include <string>    // Incluir biblioteca string para poder trabajar con cadenas de texto
using namespace std; // Espacio de trabajo

int main() // Funcion principal
{
    string minombre;                 // Declarar la variable llamada minombre, tipo string
    cout << "Introduce tu nombre: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> minombre;                 // Guardar el nombre que ingreso el usuario en la variable minombre

    cout << "Hola " << minombre << " bienvenido al mundo de c++"; // Mostrar en consola el mensaje final
    return 0;                                                     // Devolver 0, indica que el programa terminó
}

// Problema 5 Operaciones Aritmeticas: Diseña y codifica una aplicación que realice operaciones aritméticas
#include <iostream>  // Incluir biblioteca iostream para la entrada y salida de datos
using namespace std; // Espacio de trabajo

int main() // Funcion principal
{
    float n1, n2; // Declarar dos variables tipo float

    cout << "Introduce el valor de tu primer numero: ";  // Mostrar en consola lo que el usuario debe introducir
    cin >> n1;                                           // Guardar el primer numero en la variable n1
    cout << "Introduce el valor de tu segundo numero: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> n2;                                           // Guardar el segundo numero en la variable n2

    // Imprimir los resultados de las operaciones hechas con los numeros que el usuario introdució
    cout << "El resultado de sumar " << n1 << " y " << n2 << " es de: " << n1 + n2 << endl;
    cout << "El resultado de restar " << n1 << " y " << n2 << " es de: " << n1 - n2 << endl;
    cout << "El resultado de multiplicar " << n1 << " y " << n2 << " es de: " << n1 * n2 << endl;
    cout << "El resultado de dividir " << n1 << " y " << n2 << " es de: " << n1 / n2 << endl;
    cout << "El resultado del modulo de " << n1 << " y " << n2 << " es de: " << static_cast<int>(n1) % static_cast<int>(n2) << endl; // Usar static_cast<int> para convertir a entero los numeros y poder usar el modulo
    return 0;                                                                                                                        // Devolver 0, indica que el programa terminó
}

// Problema 6. Precio de un producto, diseña y codifica una aplicación que calcule el precio de un producto
#include <iostream>  // Incluir biblioteca iostream para la entrada y salida de datos
using namespace std; // Espacio de trabajo

int main() // Funcion principal
{
    float precio_base, iva, final_precio; //  Declarar las 3 variables tipo float utilizadas en el programa

    cout << "Introduce el precio base del producto: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> precio_base;                                // Guardar el valor del precio en la variable precio_base
    cout << "Introduce el % IVA aplicado: ";           // Mostrar en consola lo que el usuario debe introducir
    cin >> iva;                                        // Guardar el valor del IVA en la variable iva

    final_precio = (precio_base * iva) / 100 + precio_base; // Calcular el precio final sumando el IVA al precio base

    cout.precision(5);                                                                    // Definir la salida del cout a 5 cifras significativas
    cout << "El precio del producto con el: " << iva << " de IVA es: $ " << final_precio; // Imprimir en pantalla el precio final

    return 0; // Devolver 0, indica que el programa terminó
}

// Problema 8 Promedio calificaciones
#include <iostream>
#include <string>
using namespace std;

int main() // Funcion principal
{
    float c1, c2, c3, promedio; // Declarar las 4 variables tipo float utilizadas en el programa
    string alumno;              // Declarar la variable tipo string utilizada en el programa

    cout << "Introduce el nombre del alumno: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> alumno;                              // Guardar el nombre en la variable alumno

    // Pedir las calificaciones y guardarlas en cada variable de calificacion correspondiente
    cout << "Introduce la primera calificacion: ";
    cin >> c1;
    cout << "Introduce la segunda calificacion: ";
    cin >> c2;
    cout << "Introduce la tercera calificacion: ";
    cin >> c3;

    promedio = (c1 + c2 + c3) / 3;                                       // Calcular el promedio sumando todas las calificciones y dividiendola entre 3
    cout.precision(2);                                                   //  Definir la salida del cout a 2 cifras significativas
    cout << "El promedio de: " << alumno << " es: " << promedio << endl; // Imprimir en consola el nombre del alumno y su promedio
    return 0;                                                            // Devolver 0, indica que el programa terminó
} */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Problema 1 Codifica tu propia aplicacion que muestre en consola "Hola mundo c++"
    cout << "Hello World c++" << endl; // Imprimir Hello World en consola y terminar la linea

    // Problema 2 Declara y Asigna:
    int n1 = 2, n2 = 4, suma;                          // Declarar las tres variables enteras y asignarle los valores a n1 y n2
    suma = n1 + n2;                                    // Calcular la suma de n1 y n2 guardando el resultado en la variable suma
    cout << "La suma de n1 y n2 es: " << suma << endl; // Imprimir el resultado en consola

    // Problema 3 Area de un Rectangulo. Aplicacion que cacula el area de un rectangulo
    float area, base = 5, altura = 10;                                                                                                     // Declarar las 3 variables tipo float, asignandole valores a base y alura
    area = base * altura;                                                                                                                  // Calcular el area del rectangulo, guardando el resultado en la variable area
    cout << "El area del rectangulo con las medidas de: " << base << " de base y " << altura << " de altura es igual a: " << area << endl; // Imprimir el resultado en consola

    // Problema 4 Uso de Cadenas (string): Aplicacion que utilice variables tipo string
    string minombre;                 // Declarar la variable llamada minombre, tipo string
    cout << "Introduce tu nombre: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> minombre;                 // Guardar el nombre que ingreso el usuario en la variable minombre

    cout << "Hola " << minombre << " bienvenido al mundo de c++" << endl; // Mostrar en consola el mensaje final

    // Problema 5 Operaciones Aritmeticas: Diseña y codifica una aplicación que realice operaciones aritméticas
    float n1_1, n2_1; // Declarar dos variables tipo float

    cout << "Introduce el valor de tu primer numero: ";  // Mostrar en consola lo que el usuario debe introducir
    cin >> n1_1;                                         // Guardar el primer numero en la variable n1_1
    cout << "Introduce el valor de tu segundo numero: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> n2_1;                                         // Guardar el segundo numero en la variable n2_1

    // Imprimir los resultados de las operaciones hechas con los numeros que el usuario introdució
    cout << "El resultado de sumar " << n1_1 << " y " << n2_1 << " es de: " << n1_1 + n2_1 << endl;
    cout << "El resultado de restar " << n1_1 << " y " << n2_1 << " es de: " << n1_1 - n2_1 << endl;
    cout << "El resultado de multiplicar " << n1_1 << " y " << n2_1 << " es de: " << n1_1 * n2_1 << endl;
    cout << "El resultado de dividir " << n1_1 << " y " << n2_1 << " es de: " << n1_1 / n2_1 << endl;
    cout << "El resultado del modulo de " << n1_1 << " y " << n2_1 << " es de: " << static_cast<int>(n1_1) % static_cast<int>(n2_1) << endl; // Usar static_cast<int> para convertir a entero los numeros y poder usar el modulo

    // Problema 6. Precio de un producto, diseña y codifica una aplicación que calcule el precio de un producto
    float precio_base, iva, final_precio; //  Declarar las 3 variables tipo float utilizadas en el programa

    cout << "Introduce el precio base del producto: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> precio_base;                                // Guardar el valor del precio en la variable precio_base
    cout << "Introduce el % IVA aplicado: ";           // Mostrar en consola lo que el usuario debe introducir
    cin >> iva;                                        // Guardar el valor del IVA en la variable iva

    final_precio = (precio_base * iva) / 100 + precio_base; // Calcular el precio final sumando el IVA al precio base

    cout.precision(5);                                                                            // Definir la salida del cout a 5 cifras significativas
    cout << "El precio del producto con el: " << iva << " de IVA es: $ " << final_precio << endl; // Imprimir en pantalla el precio final

    // Problema 8 Promedio calificaciones
    float c1, c2, c3, promedio; // Declarar las 4 variables tipo float utilizadas en el programa
    string alumno;              // Declarar la variable tipo string utilizada en el programa

    cout << "Introduce el nombre del alumno: "; // Mostrar en consola lo que el usuario debe introducir
    cin >> alumno;                              // Guardar el nombre en la variable alumno

    // Pedir las calificaciones y guardarlas en cada variable de calificacion correspondiente
    cout << "Introduce la primera calificacion: ";
    cin >> c1;
    cout << "Introduce la segunda calificacion: ";
    cin >> c2;
    cout << "Introduce la tercera calificacion: ";
    cin >> c3;

    promedio = (c1 + c2 + c3) / 3;                                       // Calcular el promedio sumando todas las calificciones y dividiendola entre 3
    cout.precision(2);                                                   //  Definir la salida del cout a 2 cifras significativas
    cout << "El promedio de: " << alumno << " es: " << promedio << endl; // Imprimir en consola el nombre del alumno y su promedio

    return 0;
}