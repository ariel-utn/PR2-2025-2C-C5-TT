#include <iostream>
#include <cstring> /// strcmp

using namespace std;

/// SOBRECARGA DE OPERADORES
/// ==, <, >, +, -, etc
/// La mayoría de los operadores se pueden sobrecargar


class Persona{
private:
    char _nombre[30];
    char _dni[9];
public:
    Persona(){
        strcpy(_nombre,"sin_nombre");
        strcpy(_dni,"sin_dni");
    }
    Persona(const char* nombre, const char* dni){
        strcpy(_nombre,nombre);
        strcpy(_dni,dni);
    }

    /// GETTERS
    const char* getNombre(){
        return _nombre;
    }
    const char* getDNI(){
        return _dni;
    }


    bool operator ==(Persona p){
        if((strcmp(_nombre,p.getNombre()))!= 0){
            return false;
        }
        if((strcmp(_dni,p.getDNI()))!= 0){
            return false;
        }
        return true;
    }
};

int main(){

    Persona p1("Carlos","32972890");
    Persona p2;

    if(p1==p2){
        cout << "Son la misma persona" << endl;
    }
    else{
        cout << "No son la misma persona" << endl;
    }

	return 0;
}
