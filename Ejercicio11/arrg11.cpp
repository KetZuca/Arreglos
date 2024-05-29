/*
Se desea diseñar una matriz 3x3 que se carga de forma automática cuando el programa se ejecute 
y que posteriormente se muestre la matriz cargada junto con sus respectivas diagonales (principal 
y secundaria). Valide el código y de existir algún error corríjalo.
*/

#include <iostream> //Cambiado libreria string por iostream
using namespace std; //Arreglado "sti" por "std"

int main() { //Agregado int
    int n[3][3], a=1; //Arreglada la matrix 3x3 y poniendola dentro de la funcion principal
    for(int i = 0; i < 3; i++) {
        for(int j= 0; j < 3; j++) {
        n[i][j] = a;
        a++;
        }
    }

    cout << "\tMatriz Cargada...\n";
    for(int i =0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        cout << n[i][j] << "\t";
        }
    cout << endl;
    }

    cout << endl << endl;
    cout << "\tDiagonal Secundaria...\n";
    for(int i =0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if((i+j) == 2) {
            cout << n[i][j] <<"\t";
            } else {
            cout << "\t";
            }
        }
    cout<<endl;
    }

    //Añadida la diagonal principal
    cout << endl << endl;
    cout << "\tDiagonal Principal...\n"; 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                cout << n[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0; //Removido el return 0 de comentarios
}