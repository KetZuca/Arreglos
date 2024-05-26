/*
Se desea diseñar una matriz 3x3 que se carga de forma automática cuando el programa se ejecute 
y que posteriormente se muestre la matriz cargada junto con sus respectivas diagonales (principal y secundaria). Valide el código y de existir algún error corríjalo.
*/
#include <iostream>
using namespace std;

int main() {
    int n[3][3], a = 1;

    cout<< "\tMatriz Cargada...\n";
    for(int i = 0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            n[i][j] = a;
            cout<< n[i][j] <<"\t";
            a++;
        }
        cout<<endl;
    }

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

    cout << endl << endl;
    cout << "\tDiagonal Secundaria...\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i + j == 2) {
                cout << n[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
    system("pause");
}