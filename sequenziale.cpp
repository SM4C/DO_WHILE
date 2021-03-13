#include <iostream>
using namespace std;
int main ()
{
    int a, b, s=0;
    cout<<"inserire a: ";
    cin>>a;
    cout<<"inserire b: ";
    cin>>b;
    do
    {
        s=s+a;
        b=b-1;
    }
    while (b>0);
    cout<<"risultato: "<<s<<endl;
    system ("pause");
    return 0;
}
