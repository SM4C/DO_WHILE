#include <iostream>
using namespace std;
int main ()
{
    float n;
    string choice;
    cout<<"vuoi avviare il programma?: (s/n)"<<endl;
    cin>>choice;
    if (choice=="s"||choice=="S")
    {
        do
        {
            cout<<"inserisci il numero da convertire: "<<endl;
            cin>>n;
            if (n>5)
            {
                if (n>6.5)
                {
                    if (n>7.5)
                    {
                        cout<<endl;
                        cout<<n<<"= GIUDIZIO OTTIMO"<<endl;
                        cout<<endl;
                    }
                    else
                    {
                        cout<<endl;
                        cout<<n<<"= GIUDIZIO BUONO"<<endl;
                        cout<<endl;
                    }
                }
                else
                {
                    cout<<endl;
                    cout<<n<<"= GIUDIZIO SUFFICIENTE"<<endl;
                    cout<<endl;
                }
            }
            else
            {
                cout<<endl;
                cout<<n<<"= GIUDIZIO INSUFFICIENTE"<<endl;
                cout<<endl;
            }
            cout<<"c'è un altro numero? (s/n): "<<endl;
            cin>>choice;
        }
        while (choice=="s"||choice=="S");
        cout<<"-PROGRAMMA CHIUSO CORRETTAMENTE-"<<endl;
    }
    system ("pause");
    return 0;
}
