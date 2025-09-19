#include <iostream>
using namespace std;

class Base{
public:
    int x;

protected:
    int y;

private:
    int z;

};
/// MODOS DE HERENCIA
class DerivadaPublica : public Base{

public:
    void modificar(){
        x = 0;  /// public
        y = 0;  /// protected
        ///z = 0;   Lo private de la clase base es inaccesible!!!!
    }

};

/// MODOS DE HERENCIA
class DerivadaProtegida : protected Base{

/// SI NO ESPECIFICAMOS EL MODIFICADOR DE ACCESO, POR DEFECTO ES PRIVADO
public:
    void modificar(){
        x = 0;     /// protected
        y = 0;     /// protected
        ///z = 0;  /// Lo private de la clase base es inaccesible!!!!
    }
};

/// MODOS DE HERENCIA
class DerivadaPrivada : private Base{
public:
    void modificar(){
        x = 0;      /// private
        y = 0;      /// private
        /// z = 0;  /// Lo private de la clase base es inaccesible!!!!
    }
};

int main(){

    /// TIPO_DATO VARIABLE;
    DerivadaPublica DPublica;

    /// DPublica.z; /// Inaccesible
    /// DPublica.y; /// es Protected por eso no puedo acceder fuera de la clase
    DPublica.x;     /// es Publico por eso puedo acceder fuera de la clase

    DerivadaProtegida DProtegida;
    /// DProtegida.x;   /// es Protected por eso no puedo acceder fuera de la clase
    /// DProtegida.y;   /// es Protected por eso no puedo acceder fuera de la clase
    /// DProtegida.z    /// Inaccesible

    DerivadaPrivada DPrivada;
    /// DPrivada.z; /// Inaccesible
    /// DPrivada.y; /// es Private por eso no puedo acceder fuera de la clase
    /// DPrivada.x; /// es Private por eso puedo acceder fuera de la clase

	return 0;
}
