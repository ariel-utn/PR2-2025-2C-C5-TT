#include <iostream>
#include <cstring>

using namespace std;

int main(){

    ///int enteros[5]= {2,3,5,7,11};

    /**
    char palabra[] = {'m','u','n','d','o','\0'};
    char palabra2[5] = {'c','h','a','u','\0'};
    char cadena[5]= {'h','o','l','a','\0'};

    int i = 0;
    while(cadena[i] != '\0'){
        cout << cadena[i];
        i++;
    }
    */

    /**
    string nombre1 = "Jose";
    string nombre2 = "Juan";

    if(nombre1==nombre2){
        cout << "son iguales" << endl;
    }
    */

    char cd1[6] = {' ',' ',' ',' ',' ','\0'};
    char cd2[5] = {'h','o','l','a','\0'};

    cout << &cd1 << endl;
    cout << &cd2 << endl;

    cout << strlen(cd1) << endl;
    cout << strlen(cd2) << endl;

    if(strcmp(cd1,cd2)==0){
        cout << "son iguales" << endl;
    }

    strcat(cd1,cd2);
    cout << cd1 << endl;







	return 0;
}
