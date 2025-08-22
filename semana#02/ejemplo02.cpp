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

int* pedirMemoria(int &t){
    cin >> t;
    int *p = nullptr;
    p = new int[t];
    if(p==nullptr){
        exit(400);
    }
    return p;
}

int main(){

    int n;
    int *ptr;

    ptr = pedirMemoria(n);

    /// PASAN COSAS
    cargarVector(ptr,n);
    mostrarVector(ptr,n);
    /// PASAN COSAS

    delete [] ptr;

	return 0;
}
