//PROGRAMA PARA CALCULAR EL SALARIO DE UN TRABAJADOR
// YARA ALINE GUZMÁN GARCÍA 22-1792

#include <iostream> 
#include <stdlib.h>
#include <fstream> 

using namespace std;

int main()
{
    float dia, hora, salario; 
    string nombre_del_trabajador; 

    cout << "CALCULO DEL SALARIO DE UN TRABAJADOR" << endl;

    cout << "LA TARIFA POR DIA LABORADO ES DE: Q.75.25" << endl;

    cout << "LA TARIFA POR hora LABORADA ES DE: Q.14.75" << endl;


    cout << "POR FAVOR INGRESE SU NOMBRE O EL NOMBRE DEL TRABAJADOR: " << endl; 
    cin >> nombre_del_trabajador;  
   
    cout  << "POR FAVOR INGRESE LOS DIAS QUE LABORO:" << endl;
    cin >> dia; 

    cout  << "AHORA POR FABOR INGRESE LAS HORAS QUE LABORO:" << endl; 
    cin >> hora; 

    salario = dia * 75.25 + hora * 14.75; 

    cout << "EL SALARIO TOTAL ES DE:" << salario << endl; 
    system("pause");

    ofstream total_salario;  
    total_salario.open ("totales_salarios.txt", ios::out); 

    if (total_salario.fail()) 
    {
       cout <<"ERROR NO SE PUDO ABRIR EL ARCHIVO";  
       exit (1);
    }
    
    total_salario << "EL TOTAL CALCULDO ES DE: Q." << salario << endl;  

    total_salario.close();
    return 0;
}