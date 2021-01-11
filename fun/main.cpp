#include <iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int i_arr[ROWS][COLS], const int m, const int n);
void FillRand(double i_arr[ROWS][COLS], const int m, const int n);

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

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int i_arr[ROWS][COLS], const int m, const int n)
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
void Print(double i_arr[ROWS][COLS], const int m, const int n)
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

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int i_arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (i_arr[k][l] > i_arr[i][j])
					{
						int buffer = i_arr[i][j];
						i_arr[i][j] = i_arr[k][l];
						i_arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double i_arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (i_arr[k][l] > i_arr[i][j])
					{
						double buffer = i_arr[i][j];
						i_arr[i][j] = i_arr[k][l];
						i_arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"Sum: "<< sum<<endl;
}
void Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"Sum: "<< sum<<endl;
}
void Sum(int i_arr[ROWS][COLS], const int m, const int n)
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
void Sum(double i_arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += i_arr[i][j];
		}
	}
	cout << "Sum: " << sum << endl;
}

void Avg(int arr[], const int n)
{

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"Avg: "<< sum / n<<endl;
}
void Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		 sum += arr[i];
	}
	cout <<"Avg: "<< sum/n<<endl;
}
void Avg(int i_arr[ROWS][COLS], const int m, const int n)
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
	cout << "Avg: "<<avg<<endl;
}
void Avg(double i_arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += i_arr[i][j];
		}
	}
	double avg = sum / (ROWS + COLS);
	cout <<"Avg: "<< avg<<endl;
}

void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for ( int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<"min value: "<< min<<endl;
}
void minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout <<"min value: "<< min<<endl;
}
void minValueIn(int i_arr[ROWS][COLS], const int m, const int n)
{
	int min = i_arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for(int j=0;j<n;j++)
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
	cout <<"max value: "<< max<<endl;
}
void maxValueIn(double arr[], const int n)
{
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout <<"max value: "<< max<<endl;
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

void Unique(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % 100;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}
void Unique(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % 100;
			arr[i] /= 10;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}