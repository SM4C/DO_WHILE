#include <iostream>
using namespace std;
int main ()
{
    int n, a, b, mul, k;
    cout<<"inserire il numero da moltiplicare: ";
    cin>>n;
    cout<<"inserire il primo numero per l'intervallo: ";
    cin>>a;
    cout<<"inserire il secondo numero per l'intervallo: ";
    cin>>b;
    k=1;
    if (a<b)
    {
        do
        {
            mul=k*n;
            n=k+1;
        }
        while (n<b);
        cout<<mul<<endl;
    }
    else
    {
        cout<<"l'intervallo 'a' e 'b' è errato, riprova: "<<endl;
    }
    system ("pause");
    return 0;
}
