#include <iostream>
#include <climits>
using namespace std;

const int V = 6;

// Fungsi untuk mencari node dengan jarak minimum
int minDistance(int dist[], bool visited[])
{
    int min = INT_MAX;
    int min_index;

    for (int v = 0; v < V; v++)
    {
        if (!visited[v] && dist[v] < min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Menampilkan path
void printPath(int parent[], int j)
{
    if (parent[j] == -1)
    {
        cout << j;
        return;
    }

    printPath(parent, parent[j]);
    cout << " -> " << j;
}

// Algoritma Dijkstra
void dijkstra(int graph[V][V], int src, int dest)
{
    int dist[V];
    bool visited[V];
    int parent[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, visited);

        visited[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] &&
                graph[u][v] &&
                dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v])
            {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Shortest distance from node "
         << src << " to node "
         << dest << " = "
         << dist[dest] << endl;

    cout << "Path : ";
    printPath(parent, dest);
    cout << endl;
}

int main()
{
    int graph[V][V] =
    {
        {0,4,2,0,0,0},
        {4,0,1,5,0,0},
        {2,1,0,8,10,0},
        {0,5,8,0,2,6},
        {0,0,10,2,0,3},
        {0,0,0,6,3,0}
    };

    int source = 1;
    int destination = 5;

    dijkstra(graph, source, destination);

    return 0;
}
