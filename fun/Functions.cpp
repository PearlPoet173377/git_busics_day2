#include"Functionsh.h"


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
void Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
}

template<typename T>
void Avg(T arr[], const int n)
{

	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Avg: " << sum / n << endl;
}

template<typename T>
void minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout << "min value: " << min << endl;
}

template<typename T>
void maxValueIn(T arr[], const int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout << "max value: " << max << endl;
}