#include <iostream>
using namespace std;
int main ()
{
    int n,mul = 0,k;
    cout<<"inserisci il numero: ";
    cin>>n;
    k=1;
    while (mul<100)
    {
        cout<<mul<<endl;
        k=k+1;
        mul=n*k;
    }
    system ("pause");
    return 0;
}

