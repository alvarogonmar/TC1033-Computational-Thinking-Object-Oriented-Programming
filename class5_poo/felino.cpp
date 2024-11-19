
#include "felino.h"

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
    cout << "El felino de " << peso << " kg esta durmiendo" << endl;
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
void felino::setColor(string Color1)
{
    color = Color1;
}
string felino::getColor()
{
    return color;
}