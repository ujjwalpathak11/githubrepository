#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}
void solution(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << " "<<arr[i];
}
int main()
{
	int arr[] = {11,21,9,0,2,1,1};
	int a = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, a);
	cout << "Array in sorted form : \n";
	solution(arr, a);
	return 0;
}
