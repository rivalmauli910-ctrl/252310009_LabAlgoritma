#include <iostream>
#include <climits>
using namespace std;

#define V 5

void floydWarshall(int dist[V][V]) {
    int INF = 1e8;
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {
    int INF = 1e8;
    int dist[V][V] = {
        {0,   4,   INF, 5,   INF},
        {INF, 0,   1,   INF, 6  },
        {2,   INF, 0,   3,   INF},
        {INF, INF, 1,   0,   2  },
        {1,   INF, INF, 4,   0  }
    };

    floydWarshall(dist);

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
