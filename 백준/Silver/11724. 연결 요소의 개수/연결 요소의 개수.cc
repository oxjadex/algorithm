#include <iostream>
#include <vector>
using namespace std;

int n = 0, m = 0;
int cnt = 0;
vector<vector<int>> graph;
vector<bool> visited;

void Search(int node) {
    visited[node] = true;

    for (int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if (!visited[next]) {
            Search(next);
        }
    }
}

int main() {
    cin >> n >> m;
    graph.resize(n);
    visited.resize(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            Search(i);
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
