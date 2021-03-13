#include <iostream>
using namespace std;
int main()
{
    int num, max, min;
    max=0;
    min=999999;
    do
    {
        cout<<"inserisci un numero intero positivo: ";
        cin>>num;
        if (num>max)
        {
            max=num;
        }
        if (num<min && num!=0)
        {
            min=num;
        }
    }
    while (num!=0);
    cout<<"massimo= "<<max<<endl;
    cout<<"minimo= "<<min<<endl;
    system ("pause");
    return 0;
}

