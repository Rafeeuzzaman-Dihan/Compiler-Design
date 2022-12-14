#include <iostream>
using namespace std;

int main()
{
    string a;
    cout<<"Enter equation :"<<endl;
    cin>>a;

    for(int i=0; i<a.length(); i++)
    {
        switch(a[i])
        {
            case '+':cout<<"+"<<endl;
            break;
            case '-':cout<<"-"<<endl;
            break;
            case '*':cout<<"*"<<endl;
            break;
            case '/':cout<<"/"<<endl;
            break;
            case '=':cout<<"="<<endl;
            break;
        }
    }



    return 0;
}
