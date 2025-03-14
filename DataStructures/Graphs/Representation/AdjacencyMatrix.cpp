#include <iostream>
using namespace std;
int main() {
    // n -> nodes / vertices
    // m -> edges
    int n, m;
    cin >> n >> m;
    // We are considering an undirected graph (u->v & v->u)
    // It is mandatory to traverse all the nodes, Time Complexity O(n)
    int ** adjMatrix = new int * [n + 1]; // For zero based indexing
    for (int i = 0; i <= n; ++i) {
        // Each row has to be initialised to (n+1)
        adjMatrix[i] = new int [n+1];
        // By default, let's add zero to all the cells
        for (int j = 0; j <= n; ++j) {
            adjMatrix[i][j] = 0;
        }
    }
    // Let's connect the (n) nodes via edges (m)
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        // Undirected graph (u->v & v->u)
        adjMatrix[u][v] = 1;
        // Directed : Skip this part
        adjMatrix[v][u] = 1;
        // adjMatrix[v][u] = 0; // For directed
    }
    // Print the adjacency matrix
    for (int i = 1; i <= n ; ++i) {
        for (int j = 1; j <= n ; ++j) {
            cout << adjMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[] adjMatrix;
    return 0;
}
