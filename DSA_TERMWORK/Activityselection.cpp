#include <bits/stdc++.h>
using namespace std;
void activityselection(int s[], int f[], int n)
{
	int i, j;
	cout << "Selected activities" << endl;
	i = 0;
	cout << i << " ";
	for (j = 1; j < n; j++) {
		if (s[j] >= f[i]) {
			cout << j << " ";
			i = j;
		}
	}
}
int main()
{
	int s[] = { 2,3,0,4,8,5};
	int f[] = { 3,4,6,7,8,9 };
	int n = sizeof(s) / sizeof(s[0]);
	activityselection(s, f, n);
	return 0;
}
