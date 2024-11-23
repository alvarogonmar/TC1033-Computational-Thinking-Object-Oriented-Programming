#include <iostream>
#include <string>
using namespace std;

// Crear clase Alumno
class Alumno
{
private:                               // Atributos privados
    int edad;                          // Edad del alumno
    string matricula, nombre, carrera; // Matricula, nombre y carrera del alumno

public:                                  // Metodos publicos
    Alumno();                            // Constructor default
    Alumno(int, string, string, string); // Constructor con parametros

    // Metodos getters con sus respectivos setters debajo
    int getEdad();
    void setEdad(int);
    string getMatricula();
    void setMatricula(string);
    string getNombre();
    void setNombre(string);
    string getCarrera();
    void setCarrera(string);

    void imprimeAlumno(); // Mostrar en consola la informacion del alumno
    void cumpleanios();   // Incrementar en 1 la edad del alumno
};

Alumno::Alumno() // Constructor default
{
    edad = 0;
    matricula = "";
    nombre = "";
    carrera = "";
};

// Constructor con parametros
Alumno::Alumno(int edad1, string matricula1, string nombre1, string carrera1)
{
    edad = edad1;
    matricula = matricula1;
    nombre = nombre1;
    carrera = carrera1;
}

int Alumno::getEdad() // Getter para obtener y retornar edad del alumno
{
    return edad;
}
void Alumno::setEdad(int edad1) // Setter para modificar la edad, y asignar el valor a edad
{
    edad = edad1;
}
string Alumno::getMatricula() // // Getter para obtener y retornar la matricula del alumno
{
    return matricula;
}
void Alumno::setMatricula(string matricula1) // Setter para modificar la matricula, y asignar el valor a matricula
{
    matricula = matricula1;
}
string Alumno::getNombre() // Getter para obtener y retornar el nombre del alumno
{
    return nombre;
}
void Alumno::setNombre(string nombre1) // Setter para modificar el nombre, y asignar el valor a nombre
{
    nombre = nombre1;
}
string Alumno::getCarrera() // Getter para obtener y retornar la carrera del alumno
{
    return carrera;
}
void Alumno::setCarrera(string carrera1) // Setter para modificar la carrera, y asignar el valor a carrera
{
    carrera = carrera1;
}

void Alumno::imprimeAlumno() // Imprimir toda la informacion
{
    cout << "Nombre del Alumno: " << nombre << endl;
    cout << "Edad del Alumno: " << edad << endl;
    cout << "Matricula del Alumno: " << matricula << endl;
    cout << "Carrera del Alumno: " << carrera << endl;
}

void Alumno::cumpleanios() // Incrementar en 1 la edad
{
    edad++;
}

int main() // Funcion principal
{
    // Crear objeto Alumno1 con sus datos
    Alumno Alumno1 = Alumno(19, "A01646343", "Alvaro", "ITC");

    // Imprimir datos iniciales
    Alumno1.imprimeAlumno();

    // Probar metodo cumpleanios
    Alumno1.cumpleanios();
    cout << "\nDespués de cumplir anios:" << endl;
    Alumno1.imprimeAlumno();

    // Probar setters
    Alumno1.setNombre("Roberto");
    Alumno1.setCarrera("Ingeniería en Transformacion Digital");
    Alumno1.setEdad(24);
    Alumno1.setMatricula("A0167690");

    cout << "\nPrueba usando setters:" << endl;
    Alumno1.imprimeAlumno();

    // Probar getters
    cout << "\nPruebas de getters:" << endl;
    cout << "Nombre: " << Alumno1.getNombre() << endl;
    cout << "Edad: " << Alumno1.getEdad() << endl;
    cout << "Matricula: " << Alumno1.getMatricula() << endl;
    cout << "Carrera: " << Alumno1.getCarrera() << endl;

    // Dar salto de linea
    cout << "\n"
         << endl;

    // Otra prueba
    Alumno Alumno2 = Alumno(32, "A0409087", "Cristiano", "Medicina");
    Alumno2.imprimeAlumno();
}