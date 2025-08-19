#include <iostream>
#include <cstring>

using namespace std;

/// PARAMETROS POR OMISION
void saludar(string nombre = "usuario"){
    nombre = "";
    cout << "Hola " << nombre << endl;
}
/**
void saludar(std::string nombre){
    cout << "Hola " << nombre << std::endl;
}
*/

int main(){

    saludar();

	return 0;
}
