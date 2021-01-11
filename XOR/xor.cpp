#include <iostream>
using namespace std;

void main()
{
	cout << "Write 2 numbers" << endl;
	int a, b;
	cin >> a;
	cin >> b;
	cout<<endl;
	if (a != b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
	cout << a << endl << b;
}