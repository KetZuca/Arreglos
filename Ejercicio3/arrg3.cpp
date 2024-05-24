//Escriba un programa que imprima la suma de cada una de las columnas de una matriz bidimensional N*M
#include <iostream>
using namespace std;

int main() {
    int f, c;
    cout << "Indique el numero de filas\n";
    cin >> f;
    cout << "Indique el numero de columnas\n";
    cin >> c;

    int** arr = new int*[f];
    for (int i = 0; i < f; ++i) {
        arr[i] = new int[c];
    }

    int valor = 0;
    cout << "Que valores le quiere dar a la matriz\n";
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            valor++;
            cout << "Valor " << valor << ": ";
            cin >> arr[i][j];
            cout << endl;
        }
    }
    
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    int* suma = new int[c];
    for(int i = 0; i < c; i++) {
        suma[i] = 0;
        for(int j = 0; j < f; j++) {
          suma[i] += arr[j][i];  
        }
        cout << "La suma de la columna " << i << " es: " << suma[i] << endl;
    }

    return 0;
}