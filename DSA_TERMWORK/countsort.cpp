#include <iostream>  
using namespace std;  
  
int calculatemax(int a[], int n) {  
   int max = a[0];
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; 
}  
void countsort(int a[], int n) 
{  
   int result[n+1];  
   int max = calculatemax(a, n);  
   int count[max+1]; 
  for (int i = 0; i <= max; ++i) {  
    count[i] = 0; 
  }  
  for (int i = 0; i < n; i++) {  
    count[a[i]]++;  
  }  
  for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; 
  
    for (int i = n - 1; i >= 0; i--) {  
        result[count[a[i]] - 1] = a[i];  
        count[a[i]]--; 
    }  
  
   for(int i = 0; i<n; i++) {  
      a[i] = result[i]; 
   }  
}  
void display(int a[], int n) {
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
int main() {  
    int a[] = {42, 7, 30, 11,22,11,11,3,0};  
    int n = sizeof(a)/sizeof(a[0]);  
    countsort(a, n);  
    cout<<"After sorting array is "<<endl;    
    display(a, n);  
    return 0;  
}  
