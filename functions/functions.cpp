#include <iostream>
using namespace std;
int add(int a, int b, int c =0);
int sub(int a, int b);
int mul(int a, int b);
int my_div(int a, int b);
int power(int a, int n);

void main()
{	
	int a, b;
	cout << "Write 2 numbers: "; cin >> a >> b;
	int c = add(a, b, 5);
	cout << c << endl;
	cout << sub(a, b) << endl;
	cout << mul(a, b) << endl;
	cout << my_div(a, b) << endl;
	cout << power(a,b) << endl;
	cout << add(5, 6) << endl;
}

int add(int a, int b, int c)
{
	int sum = a + b;
	return sum;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int my_div(int a, int b)
{
	return a / b;
}
int power(int a, int n)
{
	int N = 1;
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}



