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

int main()
{

    /// DECLARACION VARIABLES
    int articulo;   ///- Número de artículo (1-10)
    int sucursal;   ///- Sucursal (1-4)
    float monto;    ///- Monto
    int const ART = 10;
    int const SUC = 4;

    ///PTO A
    float montoTotal = 0;
    ///PTO B
    float totalRecaudacionPorSucursal[SUC] {};
    ///PTO C
    float recPorArticuloSucursal[ART][SUC]{};

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
        /**
        if(sucursal==1)
        {
            totalRecaudacionPorSucursal[0]+=monto;
        }
        if(sucursal==2)
        {
            totalRecaudacionPorSucursal[1]+=monto;
        }
        if(sucursal==3)
        {
            totalRecaudacionPorSucursal[2]+=monto;
        }
        if(sucursal==4)
        {
            totalRecaudacionPorSucursal[3]+=monto;
        }
        for(int i=1; i <= 4; i++)
        {
            if(i==sucursal)
            {
                totalRecaudacionPorSucursal[i-1]+= monto;
            }
        }

        switch(sucursal)
        {
        case 1:
            totalRecaudacionPorSucursal[0]+=monto;
            break;
        case 2:
            totalRecaudacionPorSucursal[1]+=monto;
            break;
        case 3:
            totalRecaudacionPorSucursal[2]+=monto;
            break;
        case 4:
            totalRecaudacionPorSucursal[3]+=monto;
            break;
        }
        */
        totalRecaudacionPorSucursal[sucursal-1]+=monto;
        /// PTO C
        recPorArticuloSucursal[articulo-1][sucursal-1] += monto;


        cout << "Ingrese articulo: ";
        cin >> articulo;
    }

    cout << "A) Recaudacion total $: " << montoTotal << endl;
    for(int i=0; i < SUC; i++)
    cout << "B) La recaudacion total sucursal "<< i + 1 << " $:"<< totalRecaudacionPorSucursal[i] << endl;

    for(int fila = 0; fila < ART; fila ++){
        cout << "PTO C) El articulo " << fila + 1 << " recaudo"<< endl;
        for(int colum = 0; colum < SUC; colum++){
            cout << "\tEn la sucursal " << colum + 1 << " $: " << recPorArticuloSucursal[fila][colum] << endl;
        }
    }


    return 0;
}


/// *(*(v + i)+j)
// **mat
//// mat[4][10];
/**
funcion(mat);
void funcion(float **)
void funcion(float (*m)[4])
void funcion(float (*)[4])
void funcion(float m[][4])
void funcion(float m[10][4])
*/
