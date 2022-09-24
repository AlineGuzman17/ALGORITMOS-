//CALCULO DE LA HIPOTENUSA VALIDACION DE NUMEROS POSITIVOS//

#include <iostream> // BIBLIOTECA ESTANDAR QUE OERMITE ENTRADAS/SALIDAS EN PANTALLA//
#include <cmath> //BIBLIOTECA PARA FUNCIONES MATEMATICAS//

using namespace std;

int main () {

    float cateto1, cateto2, hipotenusa; // DECLARACION DE VARIABLES TIPO DECIMAL//

    cout << " CALCULAR LA HIPOTENUSA " << endl;

    cout << " INGRESE LA MEDIDA DE LOS CATETOS A & B " << endl;
    
    cout << " INGRESAR CATETO A: " << endl; //MENSAJE EN PANTALLA//
    cin >> cateto1; // CAPTURA DEL VALOR POR EL USUARIO//

    cout << " INGRESAR CATETO b: " << endl;
    cin >> cateto2;

    /* VALIDAR QUE LOS NUMEROS INGRESADOS SEAN POSITIVOS*/

    if ( cateto1 >0 && cateto2 >0 ) // JEFERSON ALEXIS GANO 1 PUNTO POR PARTICIPAR//
    {
        hipotenusa = sqrt (pow (cateto1,2.0) + pow (cateto2, 2.0) );
        cout << " EL VALOR DE LA HIPOTENUSA ES: " << hipotenusa << endl;
    }

    else 

    {
        cout << " POR FAVOR INGRESAR UNICAMENTE NUMEROS POSITIVOS " << endl;

    }

    system ("PAUSE");


}