#include <bits/stdc++.h>
using namespace std;
#define vertices 5
int minikey(int key[], bool mstSet[])
{
	int min = INT_MAX, min_index;
	for (int v = 0; v < vertices; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}
void display(int minsptree[], int graph[vertices][vertices])
{
	cout << "Edges \t Weight"<<endl;
	for (int i = 1; i < vertices; i++)
		cout << minsptree[i] << " - " << i << " \t"<< graph[i][minsptree[i]] << endl;
}
void prims(int graph[vertices][vertices])
{
	int minsptree[vertices];
	int key[vertices];
	bool set[vertices];
	for (int i = 0; i < vertices; i++)
		key[i] = INT_MAX, set[i] = false;
	key[0] = 0;
	minsptree[0] = -1; 
	for (int count = 0; count < vertices - 1; count++) {
		int u = minikey(key, set);
		set[u] = true;
		for (int v = 0; v < vertices; v++)
			if (graph[u][v] && set[v] == false && graph[u][v] < key[v])
				minsptree[v] = u, key[v] = graph[u][v];
	}
	display(minsptree, graph);
}
int main()
{
	int graph[vertices][vertices] = {
	                    { 1, 2, 1, 4, 0 },
						{ 2, 1, 3, 8, 5 },
						{ 0, 3, 0, 0, 7 },
						{ 3, 2, 0, 1, 9 },
						{ 0, 5, 9, 9, 0 } };

	prims(graph);

	return 0;
}
