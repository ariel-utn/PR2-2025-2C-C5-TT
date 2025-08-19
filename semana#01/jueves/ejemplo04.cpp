#include <iostream>
using namespace std;

void mostrar1(int m[][3], int f, int c);
void mostrar2(int m[][3], int f, int c);
void cargar(int m[][3], int f, int c);

int main(){

/*
    /// int vec[5] = {1}; /// TODO EL VECTOR EN CERO
    int vec[5]; ///

    cout << vec[0] << "\t";
    cout << vec[1] << "\t";
    cout << vec[2] << "\t";
    cout << vec[3] << "\t";
    cout << vec[4] << "\t";

*/
    int const F = 3;
    int const C = 3;

    int mat[F][C] = { {1,2,3}, {4}, {1, 1, 9} };

    /**
    cout << mat[0][0] << endl;
    cout << mat[0][1] << endl;
    cout << mat[0][2] << endl;
    cout << mat[1][0] << endl;
    cout << mat[1][1] << endl;
    cout << mat[1][2] << endl;
    cout << mat[2][0] << endl;
    cout << mat[2][1] << endl;
    cout << mat[2][2] << endl;
*/
    /// mostrar1(mat,F,C);
    cout << "----" << endl;
    ///mostrar2(mat,F,C);

    /// cout << mat << endl;
    /// cout << &mat[0][0] << endl;

    /// cout << sizeof mat << " bytes" << endl;

    /**
    bool *p;
    cout << "Bytes puntero: " << sizeof p << endl;

    */
    cargar(mat,F,C);
    mostrar1(mat,F,C);


	return 0;
}

void mostrar1(int m[][3], int f, int c){
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}

void mostrar2(int m[][3], int f, int c){
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << &(m[i][j]) << "\n";
        }
    }
}

void cargar(int m[][3], int f, int c){
    int cont= 0;
    for(int i = 0; i < f; ++i){
        for(int j = 0; j < c; ++j){
            cont += 1;
            m[i][j] = cont;
        }
    }
}

