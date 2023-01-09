#include<iostream>
using namespace std;
void swap(int &x, int &y) {     
   int temp;
   temp = x;
   x = y;
   y = temp;
}
void display(int *arr, int size) {
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
void merge(int *arr, int l, int m, int r) {
   int i, j, k, leftsubarr, rightsubarr;
// size of subarrays
   leftsubarr = m-l+1; rightsubarr = r-m;
   int larr[leftsubarr], rarr[rightsubarr];
// fill subarrays
   for(i = 0; i<leftsubarr; i++)
      larr[i] = arr[l+i];
   for(j = 0; j<rightsubarr; j++)
      rarr[j] = arr[m+1+j];
   i = 0; j = 0; k = l;
//MERGE arrays
   while(i < leftsubarr && j<rightsubarr) {
      if(larr[i] <= rarr[j]) {
         arr[k] = larr[i];
         i++;
      }else{
         arr[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<leftsubarr) {       
      arr[k] = larr[i];
      i++; k++;
   }
   while(j<rightsubarr) {     
      arr[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *arr, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array is : ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     
   cout << "Array after Sorting: ";
   display(arr, n);
}
