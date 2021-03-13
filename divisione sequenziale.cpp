#include <iostream>
using namespace std;
int main ()
{
    int a, b, quoz=0;
    cout<<"inserisci due numeri: ";
    cin>>a>>b;
    while (a>=b)
    {
        a-=b;
        quoz++;
    }
    cout<<"quoziente: "<<quoz<<endl;
    cout<<"resto: "<<a<<endl;
    system ("pause");
    return 0;
}
