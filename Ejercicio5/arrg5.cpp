//Escriba un programa que calcule e imprima la transpuesta de una matriz. La transpuesta de una matriz se obtiene al escribir las filas de la matriz como columnas y las columnas como filas.
#include <iostream>
using namespace std;

int main() {
    int valor1 = 0;
    int f, m;
    cout << "Ingrese el numero de filas de la matriz\n";
    cin >> f;
    cout << "ingrese el numero de columnas de la matriz\n";
    cin >> m;
    
    int** matriz1 = new int*[f];
    for (int i = 0; i < f; ++i) {
        matriz1[i] = new int[m];
    }

    int** matrizt = new int*[m];
    for (int i = 0; i < f; ++i) {
        matrizt[i] = new int[f];
    }

    cout << "Que valores le quiere dar a la matriz\n";
    for(int f1 = 0; f1 < f; f1++) {
        for(int c1 = 0; c1 < m; c1++) {
            valor1++;
            cout << "Valor " << valor1 << ": ";
            cin >> matriz1[f1][c1];
            cout << endl;
        }
    }

    for(int i = 0; i < f; i++) {
        for(int j = 0; j < m; j++) {
            matrizt[j][i] = matriz1[i][j];
        }
    }
    
    cout << "Matriz original\n";

    for(int f1 = 0; f1 < f; f1++) {
        for(int c1 = 0; c1 < m; c1++) {
            cout << matriz1[f1][c1] << "\t";
        }
        cout << endl;
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < f; ++j) {
            cout << matrizt[i][j] << "\t";
        }
        cout << endl;
    }

}