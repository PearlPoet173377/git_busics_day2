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
	Unique(arr, n);
	cout << "Unique" << endl;
	Print(arr, n);
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
	Unique(brr, n);
	cout << "Unique" << endl;
	Print(brr, n);
	cout << delimiter;
	
	int i_arr[ROWS][COLS];
	cout << "2 array with int: " << endl;
	FillRand(i_arr, ROWS, COLS);
	Print(i_arr, ROWS, COLS);
	cout << delimiter;
	cout << "Sorted:" << endl;
	Sort(i_arr, ROWS, COLS);
	Print(i_arr, ROWS, COLS);
	cout << delimiter;
	Sum(i_arr, ROWS, COLS);
	Avg(i_arr, ROWS, COLS);
	cout << delimiter;
	minValueIn(i_arr, ROWS, COLS);
	maxValueIn(i_arr, ROWS, COLS);
	cout << delimiter;

	double i_brr[ROWS][COLS];
	cout << "2 array with double: " << endl;
	FillRand(i_brr, ROWS, COLS);
	Print(i_brr, ROWS, COLS);
	cout << delimiter;
	cout << "Sorted:" << endl;
	Sort(i_brr, ROWS, COLS);
	Print(i_brr, ROWS, COLS);
	cout << delimiter;
	Sum(i_brr, ROWS, COLS);
	Avg(i_brr, ROWS, COLS);
	cout << delimiter;
	minValueIn(i_brr, ROWS, COLS);
	maxValueIn(i_brr, ROWS, COLS);
	cout << delimiter;
}