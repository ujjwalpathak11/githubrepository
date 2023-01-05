#include <bits/stdc++.h>
using namespace std;
void swap(int* x, int* y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
}
int divide(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i= (low- 1);
	for (int j = low; j <= high - 1; j++) 
	{
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quick(int arr[], int low, int high)
{
	if (low < high) {
		int d = divide(arr, low, high);
		quick(arr, low, d - 1);
		quick(arr, d + 1, high);
	}
}
void solution(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = {22,11,11,8,9,90,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	quick(arr, 0, n - 1);
	cout << "Sorted array: \n";
	solution(arr, n);
	return 0;
}
