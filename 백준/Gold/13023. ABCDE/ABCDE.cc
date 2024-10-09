#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> graph;
vector<bool> visited;
bool found = false;

void dfs(int node, int depth) {
    if (depth == 4) {
        found = true;
        return;
    }

    visited[node] = true;

    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, depth + 1);
            if (found) return;  // 경로가 발견되면 바로 종료
        }
    }
    visited[node] = false;  // 백트래킹을 위해 방문 기록 초기화
}

int main() {
    cin >> n >> m;
    graph.resize(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        visited.assign(n, false);  // 매번 새로운 방문 기록 초기화
        dfs(i, 0);  // 각 노드에서 깊이 0부터 시작
        if (found) break;
    }

    if (found) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
