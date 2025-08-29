#include <iostream>
using namespace std;

void mostrarVector(int *v, int tam){
    for(int i=0;i<tam;i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

void cargarVector(int *v, int tam){
    for(int i=0;i<tam;i++){
        cin >> v[i];
    }
    cout << endl;
}

int main(){

/**
    int vec1[200000];
    int vec2[200000];
    int vec3[200000];
    /// STACK OVERFLOW

    cout << "Todavia funciona";
*/

/**
    int e;
    int *ptr = &e;
    *ptr = 6;
    cout << e << endl;
*/

    ///int const t = 10000000;

    int t;
    int *v = nullptr;
    cout << "Ingrese la cantidad de elementos" << endl;
    cin >> t;

    v = new int[t];  /// PIDO MEMORIA

    /// VALIDO SI PUDO CREAR MEMORIA
    if(v==nullptr){
       cout <<"ERROR: No se puedo asignar memoria";
       return -100;
    }

    cout << v << endl;

    ///PASAN COSAS
    cargarVector(v,t);
    mostrarVector(v,t);

    delete[]v; /// LIBERO MEMORIA

	return 0;
}
