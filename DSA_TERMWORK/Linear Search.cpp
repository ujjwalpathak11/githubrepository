#include <iostream>
using namespace std;

int ls(int arr[],int size,int target)
{
	if(size == 0) {
		return -1;
	}
	else if(arr[size - 1]== target){
		return size - 1;
	}
	else{
		int ans = ls(arr, size - 1,target);
		return ans;
	}
}
int main()
{
	int arr[6] = {12,13,1,8,55,3};
	int target= 3;

	int ans = ls(arr, 5, target);
	if (ans == -1){
		cout << "No found"<<endl;
	}
	else {
		cout<<"The element " <<target<< " is found at index: "<< ans<< endl;
	}
	return 0;
}
