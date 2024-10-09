#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int v = 0;
vector<pair<int, int>> graph[100001];
vector<bool> visited;
bool realFriend = false;
int maxDistance=0;
int farNode = 0;

void Search(int start) {
    queue<pair<int, int>> q;
    q.emplace(start, 0);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int distance = q.front().second;
        q.pop();

        if (distance > maxDistance) {
            maxDistance = distance;
            farNode = node;
        }

        for (int i = 0; i < graph[node].size(); i++) {
            int nextNode = graph[node][i].first;
            int nextDistance = graph[node][i].second;

            if (!visited[nextNode]) {
                visited[nextNode] = true;
                q.emplace(nextNode, distance + nextDistance);
            }
        }

    }
}

int main() {
    cin >> v;
    visited.assign(v+1, false);

    for (int i = 0; i < v; i++) {
        int u;
        cin >> u;
        while (true) {
            int node, distance;
            cin >> node;
            if (node == -1) break;;
            cin >> distance;
            graph[u].push_back({node, distance});
            graph[node].push_back({u, distance});
        }
    }

    Search(1);

    maxDistance = 0;
    visited.assign(v + 1, false);
    Search(farNode);

    cout << maxDistance << endl;

    return 0;
}
