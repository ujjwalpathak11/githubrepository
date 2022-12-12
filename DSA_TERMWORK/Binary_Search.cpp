#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int l, int r, int target)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == target)
			return mid;
		if (arr[mid] > target)
			return bs(arr, l, mid - 1, target);
		return bs(arr, mid + 1, r, target);
	}
	return -1;
}

int main()
{
	int arr[] = {1,9,11,18,90};
	int target= 900;
    int n = sizeof(arr) / sizeof(arr[0]);
	int ans = bs(arr,0,n-1, target);
	if (ans == -1){
		cout << "No found"<<endl;
	}
	else {
		cout<<"The element " <<target<< " is found at index: "<< ans<< endl;
	}
	return 0;
}
