#include"Functionsh.h"


template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
}
