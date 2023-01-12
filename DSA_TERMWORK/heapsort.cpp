#include <iostream>
using namespace std;
void heapify(int arr[], int size, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < size && arr[left] > arr[largest])
		largest = left;
	if (right < size && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, size, largest);
	}
}
void heapsort(int arr[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(arr, size, i);

	for (int i = size - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
void display(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = {11,12,10,9,5,4,33};
	int size = sizeof(arr) / sizeof(arr[0]);
	heapsort(arr, size);
	cout << "After Sorting array is  "<<endl;
	display(arr, size);
}
