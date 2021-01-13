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

void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
}
void Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
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
	cout << "Avg: " << sum / n << endl;
}
void Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Avg: " << sum / n << endl;
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
	cout << "Avg: " << avg << endl;
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