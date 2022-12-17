#include<iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[], int size);
int main()
{
	int arr[] = { 1,5,3,7,2,9 ,0,-5};
	int size = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

void selectionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
	
}
