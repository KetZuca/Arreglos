/*
Escriba un programa que cargue de forma automática un arreglo N*N, pero el tamaño de la matriz debe ser especificada por el usuario y debe ser un número positivo, 
para los elementos que formen parte de la diagonal secundaria su valor será igual a la suma de sus índices (fila + columna), 
mientras para para el resto serán igual a cero.
*/
#include <iostream>
using namespace std;

int main() {
    int fc;
    cout << "Introduzca el tamano de la matriz\n";
    cin >> fc;

    int** arr = new int*[fc];
    for (int i = 0; i < fc; ++i) {
        arr[i] = new int[fc];
    }

    cout << "Matriz resultante\n";
    for(int i = 0; i < fc; i++) {
        for(int j = 0; j < fc; j++) {
            int matrizi = i+j == fc - 1 ? i + j : 0;
            cout << matrizi << "\t";
        }
        cout << endl;
    }
    return 0;
}