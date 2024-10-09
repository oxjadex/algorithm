#include <iostream>
#include <vector>
using namespace std;

int n = 0, m = 0;
vector<vector<int>> graph;
vector<bool> visited;
bool realFriend = false;

void Search(int node, int friendRelation) {
    if (friendRelation == 4) {
        realFriend = true;
        return;
    }

    visited[node] = true;

    for (int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if (!visited[next]) {
            Search(next, friendRelation+1);
        }
    }
    visited[node] = false;

}

int main() {
    cin >> n >> m;
    graph.resize(n);
    visited.resize(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        Search(i, 0);
        if (realFriend) break;
    }

    if (realFriend) {
        cout << 1 << endl;
    }
    else cout << 0 << endl;
    return 0;
}
