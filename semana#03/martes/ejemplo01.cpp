#include <iostream>
using namespace std;

void cargarVector(int v[], int const &t){
    for(int i = 0; i < t; i++){
        v[i]= (i +1)*2;
    }
}

void mostrarVector(int v[], int const &t){
    for(int i = 0; i < t; i++){
        cout << v[i] << "\t";
    }
}

int* pedirMemoria(int &t){
    t=5;;
    return new int[t];
    /// controlar si pudo o no otorgar memoria
}

int main(){

    int TAM;
    int *ptr = nullptr;

    ptr = pedirMemoria(TAM);

    /// PASAN COSAS
    cargarVector(ptr,TAM);
    mostrarVector(ptr,TAM);

    delete[]ptr;

    return 0;
}


/**
void cargarVector(int v[], int const &t){
    for(int i = 0; i < t; i++){
        v[i]= i +1;
    }
}

void mostrarVector(int v[], int const &t){
    for(int i = 0; i < t; i++){
        cout << v[i] << "\t";
    }
}

int main(){

    int const t = 5;
    int v[t];
    cargarVector(v, t);
    mostrarVector(v, t);
}

*/
