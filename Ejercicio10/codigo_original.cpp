//Casi sin errores wom

int n[3][3], a=1;
{
    for(int i =0; i<3; i++) 
    {
        for(int j=0; j<1; j++)
        {
            n[i][i] = a;
            a++;
        }
    }

    cout<<"\tMatriz Cargada...\n";
    for(int i =0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            cout << n[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl<< endl;
    cout << "\tDiagonal Principal...\n";
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j+1)
            {
                cout << n[i][j] << "\t";
            }
            else
            {
            cout << " \t";
            }
        }       
        cout << endl;
    }
    system("pause");
}