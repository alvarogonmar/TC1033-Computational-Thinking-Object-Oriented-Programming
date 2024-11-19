#include <iostream>
using namespace std;

class felino
{
private: // Atributos
    int peso, tamanio, patas, bigotes;
    string color, garras;

public: // Metodos
        // Metodo constructor: no tiene tipo de datos, se le pone el mismo nombre de la clase
    felino(int, int, int, int, string, string);
    void dormir();
    void comer();
    void cazar();
    void correr();
    void saltar();
    void setColor(string); // Modificar datos
    string getColor();     // Consultar datos
};