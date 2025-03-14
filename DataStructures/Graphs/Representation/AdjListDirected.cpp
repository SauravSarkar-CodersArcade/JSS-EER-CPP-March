#include <bits/stdc++.h>
using namespace std;
int main() {
    // n -> nodes or vertices
    // m -> edges
    // Undirected Graph
    int n, m;
    cin >> n >> m;
    vector<int> adjList[n+1]; // Zero based indexing
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        // Directed -> (u --> v)
        adjList[u].push_back(v);
    }
    for (int i = 1; i <= n; ++i) {
        cout << "Node: " << i << " Neighbours: ";
        for (int v : adjList[i]) {
            cout << v << " ";
        }cout << endl;
    }
    return 0;
}
