#include <iostream>
using namespace std;
int main ()
{
    int n, c=0, r;
    cout<<"inserisci il numero intero compreso tra 0 e 50"<<endl;
    cin>>n;
    if (n>0&&n<=50)
    {
        do
        {
            c++;
            r=n*c;
            if (r>=50&&r<100)
            {
                cout<<r<<endl;
            }
        }while (c>=0&&c<=100);
    }
    else
    {
        cout<<"il numero inserito non è compreso tra 0 e 50"<<endl;
        return 0;
    }
    system ("pause");
    return 0;
}
