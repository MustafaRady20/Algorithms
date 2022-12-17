#include<iostream>
#include<algorithm>
using namespace std;
int searchFor(int arr[],int high, int item);
int main()
{
	// C++ Algorithms
	// Binary Search is an algorithm used for sarching for an element in an array
	// yuo should pass to searching function 3 parameters 1-the array of element 2-the length of array 3- the element you search for 
	// if the element existed , function will retuen the index of element in the array , else will return -1
	int arr[] = { 1,2,3,4,5,6,7,8,9};
	int high = sizeof(arr) / sizeof(arr[0]);
	cout << searchFor(arr,high,9);
}
int searchFor(int arr[], int high, int item)
{
	int low = 0,mid=0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == item)
		{
			return mid;
		}
		else if (item > arr[mid])
		{
			low = mid+1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}