#include <iostream>
using namespace std;
/**
Ejercicio pr�ctico:
Control de ventas

Enunciado: Un comercio tiene 10 art�culos y 4 sucursales. Cada venta registra:

- N�mero de art�culo (1-10)
- Sucursal (1-4)
- Monto

La carga termina con art�culo = 0.



Se pide calcular la recaudaci�n total por art�culo y sucursal.
*/

int main(){

    /// DECLARACION VARIABLES
    int articulo; ///- N�mero de art�culo (1-10)
    int sucursal; ///- Sucursal (1-4)
    float monto; ///- Monto

    float montoTotal = 0;

    cout << "Ingrese articulo: ";
    cin >> articulo;

    while( articulo != 0 ){

        cout << "Ingrese sucursal: ";
        cin >> sucursal;

        cout << "Ingrese monto: ";
        cin >> monto;


        /// PROCESO DATOS
        montoTotal += monto;


        cout << "Ingrese articulo: ";
        cin >> articulo;
    }

    cout << "Recaudacion total $: " << montoTotal << endl;



	return 0;
}
