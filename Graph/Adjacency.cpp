#include <bits/stdc++.h>
using namespace std;

class AdjacencyList {
public:
    vector<vector<int>> buildGraph(vector<vector<int>> &edges, int n) {
        vector<vector<int>> graph(n); // Initialize graph with n empty vectors

        for (auto &edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        return graph;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {1, 3}, {1, 4}, {2, 5}, {3, 4}, {2, 5}};
    int n = 6;

    AdjacencyList adjacencyList;
    vector<vector<int>> graph = adjacencyList.buildGraph(edges, n);

    for (int i = 0; i < n; i++) {
        cout << i << " : ";
        for (auto &ds : graph[i]) {
            cout << ds << " ";
        }
        cout << endl;
    }

    return 0; // Add return statement
}
