#include <iostream>
using namespace std;

class Llantas
{
private:
    int CantLlantas;
    int medida;
    string marcaLlanta;
    int presion;

public:
    // Metodos
    Llantas(int C_ll, int Med, string MarcL, int Pres)
    {
        CantLlantas = C_ll;
        medida = Med;
        marcaLlanta = MarcL;
        presion = Pres;
    }
    void InfoLlantas()
    {
        cout << "Tiene " << CantLlantas << " marca" << marcaLlanta << " de " << medida << "pulgadas " << " con una presion de " << presion << endl;
    }
};

class Motor
{
private:
    int HP;

public:
    Motor(int Caballos)
    {
        HP = Caballos;
    }
    void infoMotor()
    {
        cout << "Tiene " << HP << " caballos de fuerza" << endl;
    }
};

// Clase contenedora
class Automovil
{
private:
    string marca;
    Motor motor;
    Llantas llantas;

public:
    // Constructor
    Automovil(int Cll, int medidas, string Mllantas, int P, int CF, string Auto) : marca(Auto), motor(CF), llantas(Cll, medidas, Mllantas, P) {}
    void Informacion()
    {
        cout << "El auto es: " << marca << endl;
        motor.infoMotor();
        llantas.InfoLlantas();
    }
};

int main()
{
    Automovil A = Automovil(4, 27, "Michelin", 33, 1000, "Tesla");
    A.Informacion();
    return 0;
}