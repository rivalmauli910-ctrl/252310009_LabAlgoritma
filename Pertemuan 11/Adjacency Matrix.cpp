#include <iostream>
#include <vector>
using namespace std;

class Graph {
	private:
		int numVertices;
		vector<vector<int> > adjMatrix;
		bool isDirected;
		
	public:
		Graph(int vertices, bool directed = false) {
			numVertices = vertices;
			isDirected = directed;
			adjMatrix.resize(vertices, vector<int>(vertices, 0));
		}
		
		void addEdge(int u, int v, int weight = 1) {
			if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
				adjMatrix[u][v] = weight;
				if (!isDirected) {
					adjMatrix[v][u] = weight;
				}
			}
		}
		
		void removeEdge(int u, int v) {
			if(u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
				adjMatrix[u][v] = 0;
				if (!isDirected) {
					adjMatrix[v][u] = 0;
				}
			}
		}
		
		void display() {
			for (int i = 0; i < numVertices; i++) {
				for (int j=0; j < numVertices; j++) {
					cout << adjMatrix[i][j] << " ";
				}
				cout << "\n";
			}
		}
};

int main () {
  	Graph g(4, true);
  	
  	g.addEdge(0, 1);
  	g.addEdge(0, 2);
  	g.addEdge(1, 2);
  	g.addEdge(2, 3);
  	g.addEdge(3, 1);
  	g.removeEdge(1, 2);
  	
  	cout << "Adjacency Matrix:\n";
  	g.display();
  	
  	return 0;
}
