//Realizar un programa que lea un número decimal y lo muestre en pantalla en hexadecimal (base 16). 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero\n";
    cin >> num;

    const string hex = "0123456789ABCDEF";
    string arr[100];
    int contador = 0;

    while(num > 0) {
        int hexa = num % 16;
        arr[contador] = hex[hexa];
        num /= 16;
        contador++;
    }
    cout << "El numero hexadecimal es: ";
    for(int i = 99; i >= 0; i--) {
        if(arr[i] == "\0") {
            continue;
        } else {
            cout << arr[i];
        }
    }
    return 0;
}