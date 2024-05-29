/*
Se desea diseñar un arreglo unidimensional con 10 posiciones para almacenar ciertos nombres, 
pero dicho arreglo debe poseer en sus primeras posiciones los siguientes nombres en el mismo 
orden: ANA, JUAN, PEDRO, ANABELL, por lo que el arreglo debe empezarse a llenar después 
del lugar que ocupan dichos nombres, los otros nombres deben ser introducidos por el usuario por 
el teclado, después de llenarse el arreglo se deben imprimir los nombres que este contenga. Valide 
el código y de existir algún error corríjalo.*/

//#include <string> removida la biblioteca string ya que no se va a usar
#include <iostream> //Incluida la biblioteca iostream
using namespace std;

int main() { //Agregar el int a la funcion principal
    //Mover el array y la variable dentro de la funcion principal
    string nombre[10] = {"ANA", "JUAN", "PEDRO", "ANABELL"}; //Añadido el 10 para que el array pueda almacenar 10 valores
    int n = 4; //Acomodado el valor desde el cual debe empezar a almacenar nombres
    do {
        cout << "Ingrese el nombre a registrar\n";
        cin >> nombre[n];
        n++;
    } while(n < 10);

    cout << "Base de Datos llena\n";
    system("pause");
    system("cls");
    cout << "La Base de Datos posee los siguientes registros:\n";
    
    for(int i= 0; i < 10; i++) {
        cout << (i+1) << ". "<< nombre[i] << endl; //Cambiado el i-1 por i+1
    }
    system("pause");
    return 0;
}