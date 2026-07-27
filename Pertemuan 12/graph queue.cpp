#include <iostream>
#include <vector>
#include <queue>

#define M 1000

using namespace std;

const int N = 5;

void dijkstra(int graph[N][N], int source, int destination) {
    vector<pair<int, int> > adj[N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (graph[i][j] != M) {
                adj[i].push_back(make_pair(j, graph[i][j]));
            }
        }
    }
    
    int Q[N], R[N];
    for (int i = 0; i < N; i++) {
        Q[i] = M;
        R[i] = -1;
    }
    
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push(make_pair(0, source - 1));
    Q[source - 1] = 0;
    
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int w = adj[u][i].second;
            
            if (Q[v] > Q[u] + w) {
                Q[v] = Q[u] + w;
                R[v] = u;
                pq.push(make_pair(Q[v], v));
            }
        }
    }
    
    cout << "Beban = ";
    for (int i = 0; i < N; i++) {
        cout << Q[i] << " ";
    }
    cout << endl;
    
    cout << "Rute = ";
    for (int i = 0; i < N; i++) {
        cout << R[i] << " ";
    }
    cout << endl;
}

int main() {
    int graph[N][N] = {{0, 1, 3, M, M},
                       {M, 0, 1, M, 5},
                       {3, M, 0, 2, M},
                       {M, M, M, 0, 1},
                       {M, M, M, M, 0}};
                       
    int source, destination;
    cout << "Masukkan node asal : ";
    cin >> source;
    cout << "Masukkan node tujuan : ";
    cin >> destination;
    
    dijkstra(graph, source, destination);
    
    return 0;
}

