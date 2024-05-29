#include <iostream>
using namespace std;

int main() {
    int carton[5][3];
    int cartonO[15];
    int contador = 0;
    cout << "Ingrese los resultados del sorteo\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
        cout << "Valor " << contador + 1 << ": ";
        cin >> carton[i][j];
        }  
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            cartonO[contador] = carton[i][j];
            contador++;
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3 - 1; j++) {
            if(cartonO[j] > cartonO[j+1]) {
            int aux = cartonO[j];
            cartonO[j] = cartonO[j+1];
            cartonO[j+1] = aux;
            }
        }
    }

    int c10 = 0, c20 = 0, c25 = 0;
    contador = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            carton[i][j] = cartonO[contador];
            cout << carton[i][j] << "\t";
            if(carton[i][j] >= 0 && carton[i][j] <= 10) {
                c10++;
            } else if(carton[i][j] >= 11 && carton[i][j] <= 20) {
                 c20++;
            } else if(carton[i][j] >= 21 && carton[i][j] <= 25) {
                c25++;
            }
        }
        cout << endl;
    }
    cout << endl;
    int n[3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            n[i] += carton[j][i];
        }
        cout << "Promedio columna " << i + 1 << ": " << n[i] / 5 << endl;
    }

    cout << "Cantidad de numeros entre 1-10: " << c10 << "\nCantidad de numeros entre 11-20: " << c20 << "\nCantidad de numeros entre 21-25: " << c25;
    return 0;
}

    