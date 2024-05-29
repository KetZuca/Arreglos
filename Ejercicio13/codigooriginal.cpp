#include <string>
using namespace std;
string nombre[] = {"ANA", "JUAN", "PEDRO", "ANABELL"};
int n = 0;
main() {
    do {
        cout << "Ingrese el nombre a registrar\n";
        cin >> nombre[n];
        n++;
    } while(n<10);

    cout << "Base de Datos llena\n";
    system("pause");
    system("cls");
    cout << "La Base de Datos posee los siguientes registros:\n";
    
    for(int i=0; i < 10; i++) {
        cout << (i-1) << ". "<< nombre[i] << endl;
    }
    system("pause");
    return 0;
}