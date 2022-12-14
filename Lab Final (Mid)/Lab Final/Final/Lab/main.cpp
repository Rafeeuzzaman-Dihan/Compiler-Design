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
        }

        cout<<endl;

    for(int i=0; i<a.length(); i++)
        {
            switch(a[i])
        {
            case '+':cout<<"+";
            break;
            case '-':cout<<"-";
            break;
            case '*':cout<<"*";
            break;
            case '/':cout<<"/";
            break;
            case '=':cout<<"=";
            break;
        }

    }


    return 0;
}
