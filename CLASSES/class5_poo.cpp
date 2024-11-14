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
};

// Construtor inicializa las variables privadas
felino::felino(int peso1, int tamanio1, int patas1, int bigotes1, string color1, string garras1)
{
    peso = peso1;
    tamanio = tamanio1;
    patas = patas1;
    bigotes = bigotes1;
    color = color1;
}

void felino::dormir()
{
    cout << "El felino de " << peso << " esta durmiendo" << endl;
}
void felino::comer()
{
    cout << "El felino de color " << color << " esta comiendo" << endl;
}
void felino::cazar()
{
    cout << "El felino de garras " << garras << " caza" << endl;
}
void felino::correr()
{
    cout << "El felino corre " << endl;
}
void felino::saltar()
{
    cout << "El felino salta " << endl;
}
