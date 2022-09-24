//PROGRAMA QUE PERIMITE CALCULAR LA TARIFA DE UN HOTEL
// YARA ALINE GUZMÁN GARCÍA 22-1792

#include <iostream> 
#include <stdlib.h> 
#include <fstream> 

using namespace std; 

int main ()
{
    float iva,inguat,trfa,totalhab, personasxhabitacion; 

    cout <<"TARIFA POR PERSONA MAS IMPUESTOS" << endl; 

    cout << "BIENVENIDOS AL HOTEL LIBERIO" << endl;  

    cout << "POR FAVOR CONSIDERE NUESTRAS TARIFAS" << endl;
    
    cout <<"LA TARIFA PARA EL IVA ES DE 12%," << endl;

    cout <<"LA TARIFA PARA EL INGUAT ES DE 10%" << endl;

    cout <<"EL PRECIO POR PERSONA ES DE: Q85" << endl;

    cout << "POR FAVOR INGRESE EL NÚMERO DE PERSONAS A HOSPEDARSE: " << endl;  
    cin >> personasxhabitacion;  

    trfa = personasxhabitacion * 85;  
    iva = personasxhabitacion * 0.12; 
    inguat = personasxhabitacion * 0.10; 

    totalhab = trfa + iva + inguat; 

    cout << "EL PRECIO FINAL DE SU ESTANCIA ES DE: Q." << totalhab << endl; 
    system ("PAUSE");

    ofstream regristro_de_totales;  
    regristro_de_totales.open ("regrisro_de_totales.txt", ios::out);

    if (regristro_de_totales.fail()) 
    {
       cout <<"ERROR NO SE PUDO ABRIR EL ARCHIVO"; 
       exit (1);
    }
    
    regristro_de_totales << "EL PRECIO DE SU ESTANCIA ES DE: Q." << totalhab << endl; 

    regristro_de_totales.close();
    

}