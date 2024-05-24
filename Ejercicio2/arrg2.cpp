//Escriba un programa que declare y lea un arreglo bidimensional de N*M elementos, imprimir la suma de los números pares y el producto de los números impares de la matriz.
#include <iostream>
using namespace std;

int main() {
    int f, c;
    cout << "Indique el numero de filas\n";
    cin >> f;
    cout << "Indique el numero de columnas\n";
    cin >> c;

    int arr[f][c];

    int valor = 0;
    cout << "Que valores le quiere dar a la matriz\n";
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; i++) {
            valor++;
            cout << "Valor " << valor << ": ";
            cin >> arr[i][j];
            cout << endl;
        }
    }
    int multiplicar = 1, sumar = 0;
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] % 2) {
                sumar += arr[i][j];
            } else {
                multiplicar *= arr[i][j];
            }
        }
    }
    cout << "La suma de los numeros pares es: " << sumar << "\nLa multiplicacion de los numeros impares es: " << multiplicar;
    return 0;
}
