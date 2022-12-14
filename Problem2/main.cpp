#include <iostream>
using namespace std;

int main()
{
    string a;
    cout<<"Enter Equation :"<<endl;
    cin>>a;

    for(int i=0; i<a.length(); i++)
    {
        int chk = isdigit(a[i]);
        if(chk)
        {
            cout<<a[i];
        }
    }

    return 0;
}
