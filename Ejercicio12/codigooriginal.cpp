#include <iostream>
using namespace std;
int n[5][3], a=1;
main() {
    for(int i =0; i<5; i++) {
        for(int j=0; j<3; j++) {
        n[i][j] = a;
        a++;
        }
    }

    cout<<"\tMatriz Cargada...\n";
    for(int i =0; i<5; i++) {
        for(int j=0; j<3; j++) {
        cout<<n[i][j]<<"\t";
        }
    cout<<endl;
    }

    cout << endl << endl;
    cout<<"\tDiagonal Principal...\n";
    for(int i =0; i<3; i++) {
        for(int j=0; j<5; j++) {
            if(i==j) {
            cout<<n[i][j]<<"\t";
            } else {
            cout<<" \t";
            }
        }
    cout<<endl;
    }

    cout<<endl<<endl;
    cout<<"\tDiagonal Secundaria...\n";
    for(int i =0; i<5; i++) {
        for(int j=0; j<3; j++) {
            if((i+j)==2) {
            cout<<n[i][j]<<"\t";
            } else {
            cout<<" \t";
            }
        }
    cout<<endl;
    }

    system("pause");
    return 0;
