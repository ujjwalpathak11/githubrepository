#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) {
    return (x > y) ? x : y;
    }
int knapsack(int W, int wt[], int val[], int size)
{
	if (size == 0 || W == 0)
		return 0;
	if (wt[size - 1] > W)
		return knapsack(W, wt, val, size - 1);
	else
		return max(val[ size- 1] + knapsack(W - wt[size - 1],wt, val, size - 1),knapsack(W, wt, val, size - 1));
}
int main()
{
	int val[] = {11,34,78,67};
	int wt[] = {10,80,90,60};
	int W = 80;
	int size = sizeof(val) / sizeof(val[0]);
	cout << knapsack(W, wt, val, size);
	return 0;
}
