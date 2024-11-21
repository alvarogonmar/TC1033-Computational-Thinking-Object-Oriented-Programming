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