#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999
void display(int dist[][V]);
void floydWarshall(int graph[][V])
{
	int dist[V][V], i, j, k;
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					  && (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	display(dist);
}
void display(int dist[][V])
{
	cout << "shortest distances "
	         "between every pair of vertices "<<endl;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"<< "	 ";
			else
				cout << dist[i][j] << "	 ";
		}
		cout << endl;
	}
}
int main()
{
	int graph[V][V] = { { 0, 8, INF, 10 },
			          { INF, 0, 2, INF },
			          { INF, INF, 0, 3 },
			          { INF, INF, INF, 0 } };
	floydWarshall(graph);
	return 0;
}
