#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

const int V = 6;

// Nama lokasi
string kota[V] = {
    "Cibinong",
    "Sentul",
    "Bogor",
    "Baranangsiang",
    "Sukaraja",
    "Tajur"
};

void floydWarshall(int graph[V][V]) {
    int dist[V][V];

    // Menyalin graph ke matriks jarak
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Algoritma Floyd-Warshall
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INT_MAX &&
                    dist[k][j] != INT_MAX &&
                    dist[i][k] + dist[k][j] < dist[i][j]) {

                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "Jarak Terpendek dari Cibinong ke Tajur = "
         << dist[0][5] << " km" << endl;

    cout << "\nMatriks Jarak Terpendek:\n";

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j]==INT_MAX)
                cout<<"INF\t";
            else
                cout<<dist[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {

    int graph[V][V] = {
    // Cib  Sen Bog Bar Suk Taj
        {0,   8, 15, INT_MAX, INT_MAX, INT_MAX}, // Cibinong
        {8,   0,  6, 10, INT_MAX, INT_MAX},      // Sentul
        {15,  6,  0,  5,  7, INT_MAX},           // Bogor
        {INT_MAX,10,5,0,3,8},                   // Baranangsiang
        {INT_MAX,INT_MAX,7,3,0,4},              // Sukaraja
        {INT_MAX,INT_MAX,INT_MAX,8,4,0}         // Tajur
    };

    floydWarshall(graph);

    return 0;
}
