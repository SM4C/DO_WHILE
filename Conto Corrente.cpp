#include <iostream>
using namespace std;
int main ()
{
    int sal, p, v, max=INT_MIN, min=INT_MAX;
    string sc, pv;
    cout<<"inserisci il saldo iniziale: ";
    cin>>sal;
    cout<<"c'è un altro movimento (Si/No): ";
    cin>>sc;
    while (sc=="Si"||sc=="si")
    {
        cout<<"prelievo o versamento (P/V): ";
        cin>>pv;
        if (pv=="P"||pv=="p")
        {
            cout<<"inserisci l'importo: ";
            cin>>p;
            sal=sal+p;
            if (p>max)
            {
                max=p;
            }
            else if (p<min)
            {
                min=p;
            }
        }
        else if(pv=="V"||pv=="v")
        {
            cout<<"inserisci l'importo: ";
            cin>>v;
            sal=sal-v;
            if(v>p)
            {
                max=v;
            }
            else if(v<p)
            {
                min=v;
            }
        }
        cout<<"c'è un altro movimento? ";
        cin>>sc;
    }
    system ("pause");
    return 0;
}
