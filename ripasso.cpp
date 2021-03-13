#include <iostream>
using namespace std;
int main()
{
    int age, countMinor = 0, countMajor = 0, avgm = 0, countOlder = 0;
    string choice;
    do
    {
        cout<<"Quanti anni ha lo spettatore? ";
        cin>>age;
        cout<<endl;
        if(age>=0&&age<18)
        {
            countMinor++;
        }
        else if(age>=18&&age<65)
        {
            countMajor++;
            avgm=(avgm+age)/countMajor;
        }
        else if(age>65)
        {
            countOlder++;
        }
    cout<<"C'e un'altro spettatore? (Si/No) ";
    cin>>choice;
    cout<<endl;
    }while(choice=="Si"||choice=="si");
    cout<<"Spettatori minorenni: "<<countMinor;
    cout<<endl;
    cout<<"Spettatori adulti: "<<countMajor;
    cout<<endl;
    cout<<"Eta' media adulta: "<<avgm<<" anni";
    cout<<endl;
    cout<<"Spettatori over 65: "<<countOlder;
    cout<<endl;
    return 0;
}
