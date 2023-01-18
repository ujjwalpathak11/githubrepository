#include <bits/stdc++.h>
using namespace std;
struct item {
	int wt,val;
	item(int val, int wt)
		: val(val), wt(wt)
	{
	}
};
bool cmp(struct item i1, struct item i2)
{
	double x = (double)i1.val /i1.wt;
	double y = (double)i2.val/ i2.wt;
	return x > y;
}
double fknapsack(struct item arr[],int N, int size)
{
	sort(arr, arr + size, cmp);
	int currwt = 0;
	double ans = 0.0;
	for (int i = 0; i < size; i++) {
		if (currwt + arr[i].wt <= N) {
			currwt += arr[i].wt;
			ans += arr[i].val;
		}
		else {
			int remain = N - currwt;
			ans += arr[i].val* ((double)remain/ arr[i].wt);
			break;
		}
	}
	return ans;
}
int main()
{
	int N = 50;
	item arr[] = { { 200, 15 },
				{ 390, 35 },
				{ 320, 25 },
				{ 100, 55 } };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum profit earned = "<< fknapsack(arr, N, size);
	return 0;
}
