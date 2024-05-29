#include <iostream> //Incluida la biblioteca iostream
using namespace std;

int main() { //Añadido el int a la funcion principal
    int arreglo[10]; //Movido el arreglo dentro de la funcion principal
    for(int i =0; i<10; i++) { //Cambiado el valor para que el ciclo termine cuando i sea igual o mayor a 10
        cout << "Ingrese el valor a guardar" << endl;
        cin >> arreglo[i];
    }
    system("cls");
    cout << "Arreglo lleno\n";
    system("pause");
    cout << "Imprimiendo Arreglo" << endl; //Corregido "Arrelgo" a "Arreglo"
    system("pause");
    system("cls");

    for(int i =0; i<10; i++) { //Corregido el valor en el ciclo debe terminar
        cout << arreglo[i] << endl;
    }

    system("pause");
    system("cls");
    cout<<"Ordenando Arreglo\n";
    system("pause");
    cout<<"Imprimiendo Arrelgo"<<endl;
    system("pause");
    system("cls");
    int aux = 0;

    for(int i = 0; i < 10; i++) { //Corregido el valor en el ciclo debe terminar
        for(int j = 0; j < 10 - 1; j++) { //Añadido un -1 para que se pueda dar bien el ciclo
            if(arreglo[j] > arreglo[j+1]) { //Cambiado el signo "<" por ">" para que se ordene de manera creciente
            aux = arreglo[j]; //Cambiado el valor por el cual es igual la variable aux
            arreglo[j] = arreglo[j+1]; //Corregido las variables que se van a sustituir 
            arreglo[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout<<arreglo[i]<<endl;
    }
    
    system("pause");
    return 0;
}