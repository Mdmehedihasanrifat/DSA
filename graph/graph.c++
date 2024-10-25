#include <bits/stdc++.h>
using namespace std;

const int MAX_VERTEX = 100; // Define the maximum number of vertices statically

int main() {
    int vertex, edges;
    cin >> vertex >> edges;
    vector<vector<int>> adMat(vertex,vector<int>(vertex, 0));  // Use int instead of bool
    for (int i = 0; i < edges; i++) {
        int u, v,weight;
        cin >> u >> v>>weight;
        adMat[u][v] = weight;
        adMat[v][u] = weight;  // For undirected graphs
    }

    // Output the adjacency matrix
    for (int i = 0; i < vertex; i++) {
        cout << i << ":";
        for (int j = 0; j < vertex; j++) {
            cout << adMat[i][j] << " ";
        }
        cout << endl;
    }

    
}
