//Escriba un programa que imprime cuál es el elemento mayor y menor de cada una de las filas de una matriz bidimensional N*M.
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
    cout << "Matriz\n";
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\t\tMayor\tMenor\n";
    int max = arr[0][0], min = arr[0][0];

    for(int i = 0; i < f; i++) {
        max = arr[i][0];
        min = arr[i][0];
        for(int j = 0; j < c; j++) {
		if (arr[i][j] > max) {
			max = arr[i][j];
		}
		if (arr[i][j] < min) {
			min = arr[i][j];
		}
        }
        cout << "Fila: " << i << "\t\t" << max << "\t" << min << endl;
    }
    return 0;
}
