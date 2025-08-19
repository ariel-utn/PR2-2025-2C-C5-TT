#include <iostream>
using namespace std;

int main(){

    /// PUNTEROS
    int entero = 8;

    cout << "Entero [que guarda]: " << entero << endl;

    cout << "Entero [en que dir.]: " << &entero << endl;

    int *puntero = &entero;

    cout << "Puntero [que guarda]: " << puntero << endl;

    cout << "Puntero [en que dir.]: " << &puntero << endl;

    /// ASIGNO UNA NEW DIRECTION
    /// puntero = &entero;


    /// MUESTRO EL CONTENIDO DONDE APUNTA EL PUNTERO
    cout << *puntero << endl;


    /// ************* ///


    int v[3];
    ///
    puntero = v;
    cout << " Vec: " << v << endl;
    cout << "Puntero: " << puntero << endl;
    /// v=&entero; /// PUNTERO A CONSTANTE


    const int e = 5;
    const int *p = &e;
    *p=entero;










	return 0;
}
