#include <iostream>
using namespace std;
/**
Ejercicio práctico:
Control de ventas

Enunciado: Un comercio tiene 10 artículos y 4 sucursales. Cada venta registra:

- Número de artículo (1-10)
- Sucursal (1-4)
- Monto

La carga termina con artículo = 0.



Se pide calcular la recaudación total por artículo y sucursal.
*/

void leerVentas(float &montoTotal, float totalRecaudacionPorSucursal[], float recPorArticuloSucursal[][10]);
void PTOA(float montoTotal);
void PTOB(float totalRecaudacionPorSucursal[], int suc);
void PTOB_v2(float recPorArticuloSucursal[][10], int art, int suc);
void PTOC(float recPorArticuloSucursal[][10], int art, int suc);



int main()
{
    /// DECLARACION VARIABLES

    int const ART = 10;
    int const SUC = 4;
    ///PTO A
    float montoTotal = 0;
    ///PTO B
    float totalRecaudacionPorSucursal[SUC] {};
    ///PTO C
    float recPorArticuloSucursal[SUC][ART] {};

    leerVentas(montoTotal, totalRecaudacionPorSucursal, recPorArticuloSucursal);
    PTOA(montoTotal);
    PTOB(totalRecaudacionPorSucursal,SUC);
    PTOB_v2(recPorArticuloSucursal,ART,SUC);
    PTOC(recPorArticuloSucursal,ART,SUC);

    return 0;
}


void leerVentas(float &montoTotal, float totalRecaudacionPorSucursal[], float recPorArticuloSucursal[][10])
{

    int articulo;   ///- Número de artículo (1-10)
    int sucursal;   ///- Sucursal (1-4)
    float monto;    ///- Monto

    cout << "Ingrese articulo: ";
    cin >> articulo;

    while( articulo != 0 )
    {

        cout << "Ingrese sucursal: ";
        cin >> sucursal;

        cout << "Ingrese monto: ";
        cin >> monto;

        ///PTO A)
        montoTotal += monto;
        ///PTO B)
        totalRecaudacionPorSucursal[sucursal-1]+=monto;
        ///PTO C)
        recPorArticuloSucursal[sucursal-1][articulo-1] += monto;


        cout << "Ingrese articulo: ";
        cin >> articulo;
    }
}

void PTOA(float montoTotal)
{
    cout << "A) Recaudacion total $: " << montoTotal << endl;
}

void PTOB(float totalRecaudacionPorSucursal[], int suc)
{
    for(int i=0; i < suc; i++)
        cout << "B) La recaudacion total sucursal "<< i + 1 << " $:"<< totalRecaudacionPorSucursal[i] << endl;
}


void PTOC(float recPorArticuloSucursal[][10], int art, int suc)
{
    for(int colum = 0; colum < suc; colum ++)
    {
        cout << "PTO C) La Sucursal " << colum + 1 << " recaudo"<< endl;
        for(int fila = 0; fila < art; fila++)
        {
            cout << "\tCon el articulo " << fila + 1 << " $: " << recPorArticuloSucursal[colum][fila] << endl;
        }

    }
}

void PTOB_v2(float recPorArticuloSucursal[][10], int art, int suc)
{
    for(int colum = 0; colum < suc; colum ++)
    {
        int fila;
        float acum=0;
        cout << "PTO C) La Sucursal " << colum + 1 << " recaudo"<< endl;
        for(fila = 0; fila < art; fila++)
        {
            acum+=recPorArticuloSucursal[colum][fila];
        }
        cout << "\tCon el articulo " << fila + 1 << " $: " << acum << endl;
    }
}
