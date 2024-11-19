#include "felino.h"

int main()
{
    // Instancear la clase. Crear el objeto
    felino Gato = felino(12, 60, 4, 8, "naranja", "retractiles");
    Gato.dormir();
    Gato.cazar();

    felino Tigre = felino(700, 100, 4, 20, "naranja", "retractile");
    Tigre.dormir();
    Tigre.saltar();
    cout << Tigre.getColor() << endl;
    Tigre.setColor("Negro");
    cout << Tigre.getColor() << endl;
    return 0;
}

// Para correrlo:
// Poner los tres archivos g++ felino.h felino.cpp main.cpp -o main
// correr el main.out : ./main.out