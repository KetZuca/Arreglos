//Escriba un programa en C que lee un array de N elementos y que guarde 0 en las posiciones pares y 1 en las posiciones impares. Imprimir el array resultante.
#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "De que tamano quiere el array\n";
    cin >> t;
    int* arr = new int[t]; //Tuve que definirlo de esta manera porque la manera normal int arr[t] no me deja y sale error

    for(int i = 0; i < t; i++) {
       arr[i] = i % 2 == 0 ? 0 : 1;
       cout << arr[i] << " ";
    }
    return 0;
}