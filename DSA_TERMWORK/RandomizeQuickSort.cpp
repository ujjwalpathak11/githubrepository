#include <bits/stdc++.h>
using namespace std;
int rearrange(int list[], int start, int end)
{
    int pivot= list[end];
   
    int i = (start - 1);
 
    for (int j = start; j <= end - 1; j++)
    {   
        if (list[j] <= pivot) {
            i++;
            swap(list[i], list[j]);
        }
    }
    swap(list[i + 1], list[end]);
    return (i + 1);
}
int random(int arr[], int low, int high)
{
    srand(time(NULL));
    int random_index = low + rand() % (high - low);
    swap(arr[random_index], arr[high]);
    return rearrange(arr, low, high);
}
void rquicksort(int list[],int start,int end){
    if(start < end) {
        int partition_index = random(list, start, end);
        rquicksort(list, start, partition_index - 1);
        rquicksort(list, partition_index + 1, end);
    }
 }
int main(){  
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int list[size];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>list[i];
    }
    rquicksort(list,0,size-1);
    cout<<"The array elements after sorting are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<list[i]<<" ";
    }
    return 0;
}
