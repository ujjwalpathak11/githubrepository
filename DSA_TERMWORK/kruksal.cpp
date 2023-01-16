#include <bits/stdc++.h>
using namespace std;
class structure {
	int* parent;
	int* pos;
public:
	structure(int n)
	{
		parent = new int[n];
		pos = new int[n];
		for (int i = 0; i < n; i++) {
			parent[i] = -1;
			pos[i] = 1;
		}
	}
	int search(int i) {
		if (parent[i] == -1)
			return i;
		return parent[i] = search(parent[i]);
	}
	void add(int a, int b) {
		int s1 = search(a);
		int s2 = search(b);
		if (s1 != s2) {
			if (pos[s1] < pos[s2]) {
				parent[s1] = s2;
			}
			else if (pos[s1] > pos[s2]) {
				parent[s2] = s1;
			}
			else {
				parent[s2] = s1;
				pos[s1] += 1;
			}
		}
	}
};
class Graph {
	vector<vector<int>>edges;
	int vertices;
public:
	Graph(int vertices) { this->vertices = vertices; }

	void addEdge(int a, int b, int w)
	{
		edges.push_back({ w, a, b });
	}
	void kruskals()
	{
		sort(edges.begin(), edges.end());
		structure s(vertices);
		int ans = 0;
		cout <<"Edges constructed in minimum spanning tree"<<endl;
		for (auto edge : edges) {
			int w = edge[0];
			int a = edge[1];
			int b = edge[2];
			if (s.search(a) != s.search(b)) {
				s.add(a,b);
				ans += w;
				cout << a << "-" << b << "->" << w << endl;
			}
		}
		cout << "Minimum Cost Spanning Tree: " << ans;
	}
};
int main()
{
	Graph g(5);
	g.addEdge(0, 2, 1);
	g.addEdge(1, 3, 15);
	g.addEdge(2, 0, 7);
	g.addEdge(3, 0, 6);
	g.addEdge(4, 4, 5);
	g.kruskals();
	return 0;
}
