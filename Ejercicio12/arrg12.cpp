/*
Se desea diseñar una matriz cuadrada que acepte solo números enteros, la cual debe ser llenada de 
forma automática por el programa, después de ello debe mostrarse dicha matriz, junto con su 
respectiva diagonal principal y secundaria. Valide el código y de existir algún error corríjalo.*/

#include <iostream>
using namespace std;

int main() { //Añadido el int a la funcion principal
    int n[5][5], a = 1; //Acomodada la matriz para que sea una cuadrada 5x5 ademas de moverla adentro de la funcion principal
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) { //Acomodado hasta donde va a llegar J para que se adapte a la matriz
        n[i][j] = a;
        a++;
        }
    }

    cout<<"\tMatriz Cargada...\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) { //Acomodado hasta donde va a llegar J para que se adapte a la matriz
        cout << n[i][j] << "\t";
        }
    cout<<endl;
    }

    cout << endl << endl;
    cout << "\tDiagonal Principal...\n";
    for(int i =0; i < 5; i++) { //Acomodado hasta donde va a llegar i para que se adapte a la matriz
        for(int j=0; j<5; j++) {
            if(i==j) {
            cout << n[i][j] << "\t";
            } else {
            cout <<" \t";
            }
        }
    cout << endl;
    }

    cout << endl << endl;
    cout << "\tDiagonal Secundaria...\n";
    for(int i =0; i<5; i++) {
        for(int j = 0; j < 5; j++) { //Acomodado hasta donde va a llegar J para que se adapte a la matriz
            if((i+j) == 4) { //Cambiado el valor al que tiene que ser igual para que se adapte a la matriz
            cout << n[i][j] << "\t";
            } else {
            cout <<" \t";
            }
        }
    cout << endl;
    }

    system("pause");
    return 0;
} //Añadido el } final de la funcion principal