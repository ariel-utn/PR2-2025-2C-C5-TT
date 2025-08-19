#include <iostream>
using namespace std;


/// SOBRECARGA DE FUNCIONES

/// tipo_dato nombre_funcion (_parametros_)

/// DECLARACION/DEFINICION
int sumar(int , int);
int sumar(float, float);
int sumar(int (*), int);
/// int sumar(int v[], int t);
/// int sumar(int *v, int t);

int main(){

    /**
    const int var = 5;
    int v[var];
    */
    const int TAM = 5;
    int vec[TAM] = {1,2,3,4,5};

    cout << "Suma es: " << sumar(vec,TAM) << endl;
    cout << "Suma es: " << sumar(5,13) << endl;
    cout << "Sumar es: " << sumar(5.0F,3.0F) << endl;

	return 0;
}

/// IMPLEMENTACION
int sumar(int a, int b){
    cout << "INT" << endl;
    return a + b;
}
int sumar(float a , float b){
    cout << "FLOAT" << endl;
    return a + b;
}
int sumar(int v[], int t){
    cout << "VEC" << endl;
    int acu = 0;
    for(int i = 0; i < t; i++)
        /// acu += *(v + i);
        acu += v[i];
    return acu;
}
