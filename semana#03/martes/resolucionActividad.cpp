#include <iostream>

using namespace std;
/**

Hacer un programa que permita representar un Incrementador.

Un incrementador es un número entero que comienza con un valor inicial y pueda incrementarse a partir de un valor
de incremento.

También deberá llevar la cuenta de la cantidad de veces que incrementó.

Por ejemplo, si nuestro incrementador comienza en 0 y el valor de incremento es de 50. En cada incremento, aumentará de 50 en 50.

Ejemplo:
0, 50, 100, 150, etc.
Restricciones:

- El valor del incrementador no puede nunca disminuir.
- La cantidad de veces que se incrementó siempre debe aumentar de uno en uno. Tampoco puede disminuir.
- Siempre que el incrementador aumente debe hacerlo por la misma cantidad definida en el valor de incremento

*/

int main()
{
    int valorActual = 0;
    int VALOR_INCREMENTO;
    int cantidadIncrementos = 0;

    cout << "Ingrese el valor de incremento: ";
    cin >> VALOR_INCREMENTO;

    cout << "Ingrese el valor inicial : ";
    cin >> valorActual;

    bool salir;
    cout << "1- Desea incrementar. 0- Salir: ";
    cin >>salir;

    while(salir){

    valorActual += VALOR_INCREMENTO;
    cantidadIncrementos++;

    cout << "1- Desea incrementar. 0- Salir: ";
    cin >>salir;
    }

    cout << "Cantidad incrementos: " << cantidadIncrementos << endl;
    cout << "Valor final: " << valorActual << endl;

    return 0;
}
