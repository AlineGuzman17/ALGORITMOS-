//PROGRAMA PARA REALIZAR TRANSACCIONES

#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int numero_pin,numerotrns,moneda;
    float SaldoQ,Saldo$,SaldoAct,compras,pagos,monto;
     cout << "INGRESE SU NÚMERO DE PIN" << endl;
    cin >> numero_pin;
    while (numero_pin <= 2021)
    {
        cout << "INGRESE EL PIN CORRECTO";
        cin >>numero_pin;
    
    }
        cout << "BIENVENIDO YARA ALINE GUZMÁN GARCIA, 22-1792" << endl;
       
cout << "SU SALDO ACTUAL ES DE:" << endl;

cout << "Q.3,000.00 Y $.350.00" << endl;
 
cout << "QUE OPERACION DESEA REALIZAR" << endl;


cout << "SELECCIONE 1 PARA COMPRAS Y 2 PARA PAGOS" << endl;
cin >> numerotrns;

cout << "SELECCIONE 1 PARA QUETZALES Y 2 PARA DOLARES" << endl;
cin >> moneda;

cout << "POR FAVOR INGRESE SU SALDO ACTUAL" << endl;
cin >> SaldoQ,Saldo$;

cout << "POR FAVOR INGRESE LA CANTIDAD DE LA COMPRA O PAGO" << endl;
cin >> monto;

if (moneda =1)
{

 compras,pagos = SaldoQ - monto;
 compras,pagos = Saldo$ - monto;

 SaldoAct = SaldoQ - monto;

 


cout << "SU SALDO ACTUAL ES DE: Q." << SaldoAct << endl; 
}
while (monto >= 3000)
    {
        cout << "SALDO INSUFICIENTE PARA REALIZAR ESTA TRANSACCION";
    }


if (moneda =2 )
{
Saldo$ = 350;
Saldo$ = 350;
 compras,pagos = Saldo$ - monto;
 compras,pagos = Saldo$ - monto;

 SaldoAct = Saldo$-monto;

cout << "SU SALDO ACTUAL ES DE: $." << SaldoAct << endl; 
}
while (monto >= 350)
    {
        cout << "SALDO INSUFICIENTE PARA REALIZAR ESTA TRANSACCION";
    }
    system("PAUSE");
return 0;
    }