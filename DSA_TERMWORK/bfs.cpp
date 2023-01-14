#include<iostream>
#include <list>
using namespace std;
class graph
{
	int verticesNum; 
	list<int> *adjlist;
public:
	graph(int verticesNum);
	void addedge(int from, int to);
	void bfs(int startingVertex);
};

graph::graph(int verticesNum)
{
	this->verticesNum = verticesNum;
	adjlist = new list<int>[verticesNum];
}
void graph::addedge(int v, int w)
{
	adjlist[v].push_back(w);
	adjlist[w].push_back(v);
}
void graph::bfs(int vertex)
{
	bool *visited = new bool[verticesNum];
	for(int i = 0; i < verticesNum; i++)
		visited[i] = false;
	list<int> queue;
	visited[vertex] = true;
	queue.push_back(vertex);

	list<int>::iterator i;

	while(!queue.empty())
	{
		vertex = queue.front();
		cout << vertex << " ";
		queue.pop_front();
		for (i = adjlist[vertex].begin(); i != adjlist[vertex].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
    graph graph(7);
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(1, 3);
    graph.addedge(1, 4);
    graph.addedge(2, 2);
    graph.addedge(2, 5);
    graph.addedge(3, 6);

    cout << "Breadth First Traversal from 1 is : ";
    graph.bfs(1);

    return 0;
}
