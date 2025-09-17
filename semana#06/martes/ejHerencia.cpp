#include <iostream>
#include <cstring>
using namespace std;

class clsPersona
{
protected:

    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
private:
   string  estado;
   string  fechaNacimiento;
   string  apellido;
   string  nombre;
public:

    void cargar();
    void mostrar(){

        cout<<"NOMBRE: "<<nombre<<endl;
        cout<<"APELLIDO: "<<apellido<<endl;
    }


};

class clsAlumno : public clsPersona
{
private:
  int cantidadMateria;
    string nombreMateria;
public:
    void cargar();
    void mostrar(){
        clsPersona::mostrar();
        cout<<"NOMBRE MATERIA: "<<nombreMateria<<endl;
    }
};


class clsProfesor : public clsPersona
{
private:
   string institucion;
   string tituloObtenido;
public:
    void cargar();
    void mostrar()
    {
            cout<<"SOY UN PROFESOR"<<endl;
    }
};

int main(){

    clsAlumno alumno;
    clsPersona persona;
    clsProfesor profesor;

    alumno.mostrar();

//    alumno.setNombre("nombre");

//    alumno.mostrar();
//    cout<<endl;
//    persona.mostrar();
//    cout<<endl;
//    profesor.mostrar();

	return 0;
}
