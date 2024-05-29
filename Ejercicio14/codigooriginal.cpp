using namespace std;
int arreglo[10];
main() {
    for(int i =0; i<1; i++) {
        cout<<"Ingrese el valor a guardar"<<endl;
        cin>>arreglo[i];
    }
    system("cls");
    cout<<"Arreglo lleno\n";
    system("pause");
    cout<<"Imprimiendo Arrelgo"<<endl;
    system("pause");
    system("cls");

    for(int i =0; i<100; i++) {
        cout<<arreglo[i]<<endl;
    }
    system("pause");
    system("cls");
    cout<<"Ordenando Arreglo\n";
    system("pause");
    cout<<"Imprimiendo Arrelgo"<<endl;
    system("pause");
    system("cls");
    double aux =0;

    for(int i =0; i<10; i++) {
        for(int j = 0; j<5; j++) {
            if(arreglo[j]<arreglo[j+1]) {
            aux = aux +1;
            arreglo[j+1] = arreglo[j+1];
            arreglo[j+1] = aux;
            }
        }
    }

    for(int i =0; i<10; i++) {
        cout<<arreglo[i]<<endl;
    }
    
    system("pause");
    return 0;
}
