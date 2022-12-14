#include <iostream>
using namespace std;

int main()
{
    string a;
    cout<<"Equation :"<<endl;
    cin>>a;

    for(int i=0; i<a.length(); i++)
        {
            int b = isdigit(a[i]);

             if (b)
        {
            cout<<a[i];
        }
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
