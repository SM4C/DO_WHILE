#include <iostream>
using namespace std;
int main ()
{
    float media, voto, somma;
    int k;
    somma=0;
    k=0;
    do
    {
        cout<<"voto: ";
        cin>>voto;
        somma=somma+voto;
        k=k+1;
    }
    while (voto!=-1);
    media=(somma+1)/(k-1);
    cout<<"la media è: "<<media<<endl;
    system ("pause");
    return 0;
}

