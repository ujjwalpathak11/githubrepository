#include <bits/stdc++.h>
using namespace std;
void modified_bubblesort(int arr[], int n)
{
    int flag=1;
    int i,j;
	for (int i = 1; i <(n-1)&& flag==1; i++)
	    flag=-1;
		for (int j = 1; j<(n-i); j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
				    flag=1;
}
void solution(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << " "<<arr[i];
}
int main()
{
	int arr[] = {11,12,13,14,15,16};
	int a = sizeof(arr) / sizeof(arr[0]);
	modified_bubblesort(arr, a);
	cout << "Array in sorted form : \n";
	solution(arr, a);
	return 0;
}
