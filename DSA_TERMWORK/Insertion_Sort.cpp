#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
	int i,j,a;
	for (i=1;i<n;i++)
	{
		a= arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > a)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = a;
	}
}
void solution(int arr[], int n)
{
	for (int i = 0; i<n; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = {77,88,9,0,3,2};
	int total = sizeof(arr) / sizeof(arr[0]);
    cout<<"Sorted Array is :"<<endl;
	insertion_sort(arr,total);
	solution(arr,total);

	return 0;
}
