/*Escriba un programa que haciendo uso de arreglos calculé el enésimo término de la sucesión de Fibonacci. 
La sucesión de Fibonacci se define de la siguiente forma: a1 = 1, a2 = 1, y an = an-1 + an-2 para n > 2, 
es decir los dos primeros son 1 y el resto cada uno es la suma de los dos anteriores, 1, 1, 2, 3, 5, 8, 13, 21, …
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Ingrese cuantos terminos quiere\n";
        cin >> n;
        if(n <= 2) {
            cout << "Tiene que ser mayor a dos intentelo de nuevo\n";
        } 
    } while(n <= 2);
    
    int* arr = new int[n];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 0; i < n; i++) {
        cout << arr[2] << " ";
        arr[2] = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = arr[2];
    }

    return 0;


}