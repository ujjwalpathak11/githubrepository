#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
	int temp = *x;
	*x= *y;
	*y= temp;
}

void selection(int arr[], int n)
{
	int i, j, minindex;
	for (i = 0;i<n-1;i++)
	{
		minindex= i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[minindex])
			minindex = j;
		if(minindex!=i)
			swap(&arr[minindex], &arr[i]);
	}
}
void solution(int arr[], int size)
{
	for (int i=0; i < size; i++)
		cout << arr[i]<<" ";
}
int main()
{
	int arr[] = {66,44,55,33,22,11,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	selection(arr, n);
	cout << "Sorted array: \n";
	solution(arr, n);
	return 0;
}
