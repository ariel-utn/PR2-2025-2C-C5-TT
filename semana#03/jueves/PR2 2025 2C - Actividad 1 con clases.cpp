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

    void duplicar(){
        _valorActual*=2;
    }

public:
    /// METODOS - ACCIONES - EVENTOS
    void setValorActual(int valor){
        _valorActual = valor;
    }

    void setValorIncremento(int valor){
        _valorIncremento = valor;
    }
    void incrementar(){
        ///duplicar();
        _valorActual += _valorIncremento;
        _cantidadIncrementos++;
    }

    /// CONSTRUCTOR
    Incrementador(){
        _valorActual = 0;
        _cantidadIncrementos = 0;
        _valorIncremento = 50;
    }

    /// CONSTRUCTOR CON PARA CON PARAMETROS
    Incrementador(int valorActual, int valorIncremento){
        _valorActual = valorActual;
        _valorIncremento = valorIncremento;
        _cantidadIncrementos = 0;
    }

    /// DESTRUCTOR
    ~Incrementador(){
        /// delete
        cout << "bye bye (;" << endl;
    }


    /// SETTERS

    /// GETTERS

    int getValorActual(){
        return _valorActual;
    }

    int getCantidadIncrementos(){
        return _cantidadIncrementos;
    }
};

/// FUNCION!!!!!
void mostrar(Incrementador &o){
    cout << "Cantidad: " << o.getCantidadIncrementos() << endl;
    cout << "Valor: " << o.getValorActual() << endl;
    cout << "Funcion" << endl;
}

int main(){

/*
    /// Incrementador obj1; /// INSTANCIAR UN CLASE

    /// obj.setValorActual(0);
    /// obj.setValorIncremento(50);

    /**
    obj1.getCantidadIncrementos();
    obj1.getValorActual();
    */

    Incrementador obj(0,50);

    obj.incrementar();

    mostrar(obj);
*

    /**
    Incrementador obj3;
    obj3.setValorActual(30);
    obj3.setValorIncremento(3);
    obj3.getCantidadIncrementos();
    obj3.getValorActual();
    */

	return 0;
}
