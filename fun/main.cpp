#include"Functionsh.h"

#define delimiter "\n----------------------------------\n"

void main()
{
	const int n = 10;
	const int m = 7;
	int arr[n];
	cout << endl<<"With int: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << delimiter;
	cout << "Sorted:" << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter;
	Sum(arr, n);
	Avg(arr, n);
	cout << delimiter;
	minValueIn(arr, n);
	maxValueIn(arr, n);
	cout << delimiter;
	
	double brr[n];
	cout <<endl<< "With double:" << endl;
	FillRand(brr, n);
	Print(brr, n);
	cout << delimiter;
	cout << "Sorted:" << endl;
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter;
	Sum(brr, n);
	Avg(brr, n);
	cout << delimiter;
	minValueIn(brr, n);
	maxValueIn(brr, n);
	cout << delimiter;
}