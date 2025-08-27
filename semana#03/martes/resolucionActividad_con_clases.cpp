#include <iostream>
using namespace std;

class Incrementador{

    /// MODIFICADORES DE ACCESO
    /// private -> solo es accesible dentro de la clase
    /// public -> es accesible fuera de la clase (con una instancia)
    /// protected --> herencia
private:
    /// PROPIEDADES - CARACTERISTICAS - ATRIBUTOS
    int _valorActual;
    int _valorIncremento;
    int _cantidadIncrementos;

public:
    /// METODOS - ACCIONES - EVENTOS
    void incrementar(){
        _valorActual += _valorIncremento;
        _cantidadIncrementos++;
    }

    /// CONSTRUCTOR
    Incrementador(){
        _valorActual = 0;
        _cantidadIncrementos = 0;
        _valorIncremento = 50;
    }

    Incrementador(int valorActual, int valorIncremento){
        _valorActual = valorActual;
        _valorIncremento = valorIncremento;
        _cantidadIncrementos = 0;
    }

    /// SETTERS
    void setValorActual(int valor){
        _valorActual = valor;
    }

    void setValorIncremento(int valor){
        _valorIncremento = valor;
    }

    /// GETTERS

    void getValorActual(){
        cout << "Valor actual: " << _valorActual << endl;
    }

    void getCantidadIncrementos(){
        cout << "Cantidad incrementos: " << _cantidadIncrementos << endl;
    }

};



int main(){

    Incrementador obj1; /// INSTANCIAR UN CLASE

    /// obj.setValorActual(0);
    /// obj.setValorIncremento(50);

    /**
    obj1.getCantidadIncrementos();
    obj1.getValorActual();
    */

    Incrementador obj2(0,50);

    obj2.incrementar();
    obj2.incrementar();
    obj2.incrementar();
    obj2.incrementar();
    obj2.incrementar();
    obj2.incrementar();

    obj2.getCantidadIncrementos();
    obj2.getValorActual();

    /**
    Incrementador obj3;
    obj3.setValorActual(30);
    obj3.setValorIncremento(3);
    obj3.getCantidadIncrementos();
    obj3.getValorActual();
    */

	return 0;
}
