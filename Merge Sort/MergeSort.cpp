#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int left, int mid, int right) {

	// Get length of subarrays
	int len1 = mid - left + 1;
	int len2 = right - mid;
	//create subarrays
	vector<int> L(len1), R(len2);

	//copy each subarray with their values
	for (int i = 0; i < len1; i++)
	{
		L[i] = v[i + left];
	}
	for (int j = 0; j < len2; j++)
	{
		R[j] = v[j + mid + 1];
	}

	//sort the vector using subarrays

	int i = 0, j = 0, k = left;
	while (i < len1 && j < len2)
	{
		if (L[i] <= R[i])
			v[k++] = L[i++];
		else
			v[k++] = R[j++];
	}

	//check if the subArrays still have some items
	while (i < len1)
	{
		v[k++] = L[i++];
	}
	while (j < len2)
	{
		v[k++] = R[j++];
	}

}

void mergeSort(vector<int>& v, int left, int right)
{
	if (left >= right)return;

	int mid = (left + right) / 2;
	mergeSort(v, left, mid);
	mergeSort(v, mid + 1, right);
	merge(v, left, mid, right);

}

// print the new sorted array 
void print(vector<int>& v)
{
	
	cout << "*===============*===============*\n";
	for (auto i : v)
		cout << i<<" ";
	
	cout << "\n*===============*===============*\n";
}
void main() {

	vector<int>v = { 8,4,3,0,5,7,6,10 };
	mergeSort(v, 0, v.size() - 1);
	print(v);
}