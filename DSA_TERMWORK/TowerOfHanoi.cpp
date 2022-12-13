#include<iostream>
using namespace std;
void towerofhanoi(int n,char src, char ax,char ds)
{ 
	if(n==1)
	{
		cout<<"move disk- "<<n<<" from "<<src<<" to- "<<ds<<endl;
		return;
	}
	
	towerofhanoi(n-1,src,ds,ax);
	cout<<"move disk- "<<n<<" from "<<src<<" to- "<<ds<<endl;
	towerofhanoi(n-1,ax,src,ds);
}
int main()
{ 
	int n;
	cout<<"Enter num of disks: ";	
	cin>>n;
	towerofhanoi(n,'A','B','C');
	return 0;
}
