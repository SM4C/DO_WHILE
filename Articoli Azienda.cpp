//Inserire le vendite giornaliere degli articoli di un’azienda commerciale terminando quando si risponde “N” alla domanda “C’è un’altra vendita S/N?”. Per ogni articolo venduto inserire il nome del cliente, il nome dell’articolo, la quantità e il prezzo unitario. Calcolare l’importo totale per ogni cliente e, alla fine, visualizzare il nome del cliente che ha effettuato la spesa massima con a fianco tale spesa e il ricavo totale che l’azienda ha ottenuto nella giornata.

#include <iostream>
using namespace std;
int main ()
{
    float q, pu, max = 0, tot, Tot=0;
    string risp, nomec, nomea, nameMax;
    do
    {
        cout<<"inserisci il nome cliente: "<<endl;
        cin>>nomec;
        cout<<"inserisci il nome dell'articolo: "<<endl;
        cin>>nomea;
        cout<<"inserisci la quantità: "<<endl;
        cin>>q;
        cout<<"inserisci il prezzo unitario: "<<endl;
        cin>>pu;
        tot=pu*q;
        if (tot>max)
        {
            nameMax=nomec;
            max=tot;
        }
        tot=tot+tot;
        cout<<"c'è un'altra vendita?: "<<endl;
        cin>>risp;
    }
    while (risp=="s"||risp=="S");
    cout<<"spesa massima effettuata: "<<max<<endl;
    cout<<"cliente che ha speso di più: "<<nomec<<endl;;
    cout<<"ricavo totale dell'azienda: "<<tot<<endl;
    system ("pause");
    return 0;
}
