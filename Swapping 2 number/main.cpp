#include<iostream>
using namespace std;

int main()
{
	int a, b, swap;

	cout << "Enter the First Number : a =  ";
	cin >> a;
	cout << endl;

	cout << "Enter the Second Number : b =  ";
	cin >> b;
	cout << endl;

	cout << "Before Swapping: a = "<< a << " and b = " << b;
	cout << endl;

	swap = a;
	a = b;
	b = swap;

	cout << "After Swapping : a = "<< a << " and b = " << b;
	cout << endl;

 	return 0;
}
