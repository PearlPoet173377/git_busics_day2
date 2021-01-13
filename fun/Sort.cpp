#include"Functionsh.h"


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
