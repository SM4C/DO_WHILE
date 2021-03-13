#include <iostream>
using namespace std;
int main ()
{
    string name, sex, choice, nomeMaxM, nomeMaxF;
    float mark, markM, markF;
    int countM=0, countF=0, maxM=INT_MIN, maxF=INT_MIN, mediaM=0, mediaF=0, voto;
    do
    {
        cout<<"inserire il nome dello studente: "<<endl;
        cin>>name;
    SCELTA_SESSO:cout<<"inserire il sesso dello studente (M/F): "<<endl;
        cin>>sex;
        if(sex=="M"||sex=="m"||sex=="f"||sex=="F")
        {
            cout<<"inserire il voto in informatica"<<endl;
            cin>>voto;
            if (sex=="M"||sex=="m")
            {
                countM++;
                mediaM=(mediaM+voto)/countM;
                if (voto>maxM)
                {
                    maxM=voto;
                    nomeMaxM=name;
                }
            }
            else if (sex=="F"||sex=="f")
            {
                countF++;
                mediaF=(mediaF+voto)/countF;
                if (voto>maxF)
                {
                    maxF=voto;
                    nomeMaxF=name;
                }
            }
        }
        else
        {
            cout<<"Sesso non disponibile!"<<endl;
            goto SCELTA_SESSO;
        }
        cout<<"C'è un altro studente? (si/no): ";
        cin>>choice;
    }
    while (choice=="Si"||choice=="si");
    cout<<"Media in informatica maschile: "<<mediaM<<endl;
    cout<<"Media in informatica femminile: "<<mediaF<<endl;
    cout<<nomeMaxM<<" ha preso "<<maxM<<", il voto migliore nella categoria maschile"<<endl;
    cout<<nomeMaxF<<" ha preso "<<maxF<<", il voto migliore nella categoria femminile"<<endl;
    system ("pause");
    return 0;
}
