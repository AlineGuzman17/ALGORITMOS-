//No esta terminado
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main()
{
    escribir();

    system("PAUSE");
    return 0;
}

void escribir()
{

    ofstream miarchivo;
    miarchivo.open("CLASE DE ALGORITMOS.txt", ios::out);

    if (miarchivo.fail())
    {
        cout << "ERROR AL ABRIR EL ARCHIVO";
        exit(1);
    }

    miarchivo << "HOY ES UN DIA GENIAL";

    miarchivo.close();
}