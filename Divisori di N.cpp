#include <iostream>
using namespace std;
int main ()
{
    int r, n=0, k=0;
    cout<<"inserisci il numero da dividere: ";
    cin>>n;
    cout<<"i divisori di N sono: "<<endl;
    do
    {
        k++;
        r=n%k;
        if (r==0)
        {
            cout<<k<<endl;
        }
    }
    while (k<n);
    system ("pause");
    return 0;
}
