#include <iostream>
using namespace std;
int main ()
{
    int r, n=0, k=0, countap;
    cout<<"inserisci il numero da dividere: ";
    cin>>n;
    countap=0;
    do
    {
        k++;
        r=n%k;
        if (r==0)
        {
            countap++;
        }
    }
    while (k<n);
    if (countap==2)
    {
        cout<<"il numero è primo"<<endl;
    }
    else
    {
        cout<<"il numero non è primo"<<endl;
    }
    system ("pause");
    return 0;
}
