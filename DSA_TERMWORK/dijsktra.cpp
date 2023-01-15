#include <iostream>
#include <limits.h>
using namespace std;
#define V 9
int minimumdis(int dist[], bool visitednodes[]) {
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (visitednodes[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}
void display(int dist[]) {
	cout << "vertex \t\t distance from Source" << endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t\t\t" << dist[i] << endl;
}
void dijkstra(int graph[V][V], int src) {
	int dist[V]; 
	bool visitednodes[V];
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, visitednodes[i] = false;
	dist[src] = 0;
	
	for (int count = 0; count < V - 1; count++) {
		int u = minimumdis(dist, visitednodes);
		visitednodes[u] = true;
		
		for (int v = 0; v < V; v++)
			if (!visitednodes[v] && graph[u][v]
				&& dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}
	display(dist);
}
int main() {
	int graph[V][V] = { { 0, 2, 1, 0, 1, 0, 3, 8, 0 },
						{ 3, 0, 7, 1, 0, 0, 1, 10, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 9, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 8, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	dijkstra(graph, 0);
	return 0;
}
