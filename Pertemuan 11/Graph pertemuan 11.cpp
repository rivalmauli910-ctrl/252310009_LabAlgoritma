#include <iostream>
#include <vector>
using namespace std;

class Graph {
	int v;
	bool is_directed;
	vector <vector<int> > adj;
	
	public :
		Graph(int vertices, bool is__directed = false) {
			v = vertices;
			is_directed = is__directed;
			adj.resize(v);
		}
		
		void addEdge(int u,int v) {
			adj[u].push_back(v);
			if (!is_directed) {
				adj[v].push_back(u);
			}
		}
		
		void printGraph() {
			for (int i = 0; i < v; ++i) {
				cout << "Vertex " << i << " : ";
				for (int j = 0; j < adj[i].size(); j++) {
					cout << " -> " << adj[i][j];
				}
				cout << "\n" ;
			}
		}
};

int main() {
	Graph g(5, false);
	
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	
	g.printGraph();
	
	return 0; 
}
