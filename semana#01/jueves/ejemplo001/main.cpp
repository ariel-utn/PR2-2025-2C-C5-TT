#include <iostream>
using namespace std;


/// FUNCIONES
/// tipo_dato nombre_funcion (parametros)

void funcion1(int num){
    cout << "Soy una funcion: " << endl;
    cout << "n: " << &num << endl;
    cout << "n: " << num << endl;
}

int funcion2(int num){
    cout << "Soy una funcion: " << endl;
    cout << "n: " << &num << endl;
    cout << "n: " << num << endl;
    return num * 2;
}

void funcion3(int &numerito){
    cout << "Soy una funcion: " << endl;
    cout << "dir n: " << &numerito << endl;
    cout << "cont n: " << numerito << endl;
    numerito *= 2;
}

void funcion4(const int &numerito){
    cout << "Soy una funcion: " << endl;
    cout << "dir n: " << &numerito << endl;
    cout << "cont n: " << numerito << endl;
}

void funcion5(int *v, int t){
    for(int i = 0; i<t; i++){
        ///v[i]= i +1;
        *(v + i) = i + 1;
    }
}

void funcion6(int v[], int t){
    for(int i = 0; i<t; i++){
        cout << *(v + i) << "\t";
    }
}

void funcion7(int *n1, int *n2){
    cout << n1 << endl;
    *n1 *= 2;
    *n2 *= 3;
}



int main()
{
    /// VARIABLES
    /// Son espacios de memoria que contienen un tipo de dato.

    /**
    char caracter;
    bool booleano = 6;
    float decimal = 6;

    /**
    cout << "Entero: " << sizeof (int) << " bytes" << endl;
    cout << "Entero: " << sizeof (float) << " bytes" << endl;
    cout << "Entero: " << sizeof (double) << " bytes" << endl;
    cout << "Entero: " << sizeof (bool) << " bytes" << endl;

    */

    /**
    const int CONSTANTE = 0;
    cout << CONSTANTE << endl;
    */

    /**
    bool entero1;
    bool entero2;
    bool entero3;

    cout << "Entero: " << entero1 << endl;
    cout << "Entero: " << &entero1 << endl;
    cout << "Entero: " << entero2 << endl;
    cout << "Entero: " << &entero2 << endl;
    cout << "Entero: " << entero3 << endl;
    cout << "Entero: " << &entero3 << endl;
    */

    /**
    int num = 11;
    cout << "soy main: " << endl;
    cout << "dir num: " << &num << endl;
    cout << "cont num: " << num << endl;

    funcion3(num);
    cout << "num: " << num << endl;
    */


    /// PUNTEROS
    /// Guardan direcciones de memoria

    /**
    int num = 6, *puntero;
    cout<< "Contenido de entero: ";
    cout << num << endl;
    cout << "Dir. entero: ";
    cout << &num << endl;

    cout << "Contenido puntero: ";
    cout << puntero << endl;
    cout << "Dir. puntero: ";
    cout << &puntero << endl;

    /// ASIGNO AL PUNTERO LA DIR. MEM. NUM
    puntero=&num;

    cout << "Muestro contenido puntero: ";
    cout << puntero << endl;

    cout << "Cont. a donde apunta el puntero: ";
    cout << *puntero << endl;

    *puntero = 55;
    cout << num << endl;
    */

    /// DECLARO UN VECTOR DE TAMAÑO 5
    /// int v[5] {};
    /*
    for(int i=0;i<5;i++)
        cout << v[i] << "\n";
    */

    /**
    cout << "Dir. vector: ";
    cout << v << endl;

    cout << "Dir de elementos: " << endl;
    for(int i=0;i<5;i++)
    cout << "Pos: #" << i+1 << " " <<&v[i] << "\n";
    */
    //funcion5(v,5);

    /*
    *(v + 0)=88;
    v[4]=88;
*/
    ///funcion6(v,5);
    int a = 4;
    int b = 5;

    funcion7(&a,&b);

    cout << a << endl;
    cout << b << endl;


    return 0;
}
