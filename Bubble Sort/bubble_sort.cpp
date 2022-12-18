#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Bubble Sort 

/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
if they are in wrong order */

//	Time Complexity of Bubble Sort is O(n^2) 
//	Best Case is O(n) that happens when the array is already sorted

void Bubble_Sort(vector<int>& list)
{
	int len = list.size();

	for (int i = 0; i < len; i++)
	{
		bool swaped = false;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (list[j] > list[j + 1])
				swap(list[j], list[j + 1]);
				swaped = true;
		}
		if (!swaped) break;
	}
}
int main()
{
	vector<int> list = { 10,5,3,0,12 };
	Bubble_Sort(list);

	for (auto i : list)
		cout << i << " ";
	return 0;
}