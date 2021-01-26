#include <iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int i_arr[ROWS][COLS], const int m, const int n);
void FillRand(double i_arr[ROWS][COLS], const int m, const int n);

template<typename T>
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int i_arr[ROWS][COLS], const int m, const int n);
void Print(double i_arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int i_arr[ROWS][COLS], const int m, const int n);
void Sort(double i_arr[ROWS][COLS], const int m, const int n);

void Sum(int arr[], const int n);
void Sum(double arr[], const int n);
void Sum(int i_arr[ROWS][COLS], const int m, const int n);
void Sum(double i_arr[ROWS][COLS], const int m, const int n);

void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(int i_arr[ROWS][COLS], const int m, const int n);
void Avg(double i_arr[ROWS][COLS], const int m, const int n);

void minValueIn(int arr[], const int n);
void minValueIn(double arr[], const int n);
void minValueIn(int i_arr[ROWS][COLS], const int m, const int n);
void minValueIn(double i_arr[ROWS][COLS], const int m, const int n);

void maxValueIn(int arr[], const int n);
void maxValueIn(double arr[], const int n);
void maxValueIn(int i_arr[ROWS][COLS], const int m, const int n);
void maxValueIn(double i_arr[ROWS][COLS], const int m, const int n);

void Unique(int arr[], const int n);
void Unique(double arr[], const int n);
void Unique(int i_arr[ROWS][COLS], const int m, const int n);
void Unique(double i_arr[ROWS][COLS], const int m, const int n);

#define delimiter "\n-------------------------------\n"

void main()
{
	const int n = 10;
	double arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter;
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter;

	/*const int m = 8;
	double crr[m];
	FillRand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << delimiter;*/

	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);

}



void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void FillRand(int i_arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			i_arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double i_arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			i_arr[i][j] = rand() % 100;
			i_arr[i][j] /= 10;
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T i_arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i_arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
void Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
}
template<typename T>
void Sum(T i_arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += i_arr[i][j];
		}
	}
	cout << "Sum: " << sum << endl;
}

template<typename T>
void Avg(T arr[], const int n)
{

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Avg: " << sum / n << endl;
}
template<typename T>
void Avg(T i_arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += i_arr[i][j];
		}
	}
	int avg = sum / (ROWS + COLS);
	cout << "Avg: " << avg << endl;
}

void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout << "min value: " << min << endl;
}
void minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout << "min value: " << min << endl;
}
void minValueIn(int i_arr[ROWS][COLS], const int m, const int n)
{
	int min = i_arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i_arr[i][j] < min)min = i_arr[i][j];
		}
	}
	cout << "min value: " << min << endl;
}
void minValueIn(double i_arr[ROWS][COLS], const int m, const int n)
{
	double min = i_arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i_arr[i][j] < min)min = i_arr[i][j];
		}
	}
	cout << "min value: " << min << endl;
}

void maxValueIn(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout << "max value: " << max << endl;
}
void maxValueIn(double arr[], const int n)
{
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout << "max value: " << max << endl;
}
void maxValueIn(int i_arr[ROWS][COLS], const int m, const int n)
{
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i_arr[i][j] > max)max = i_arr[i][j];
		}
	}
	cout << "min value: " << max << endl;
}
void maxValueIn(double i_arr[ROWS][COLS], const int m, const int n)
{
	double max = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i_arr[i][j] > max)max = i_arr[i][j];
		}
	}
	cout << "min value: " << max << endl;
}