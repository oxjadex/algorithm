#include <iostream>
#include <vector>
#include <queue>

#define INF 1000000
#define MAX_VERTEX 20001
#define MAX_EDGE 300001

using namespace std;

int d[MAX_VERTEX];
vector<pair<int, int>> edge[MAX_EDGE];

void dijkstra(int sn) {
    d[sn] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, sn));

    while (!pq.empty()) {
        int currentS = pq.top().second;
        int currentF = -pq.top().first;
        pq.pop();

        if (d[currentS] < currentF) continue;

        for (int i = 0; i < edge[currentS].size(); ++i) {
            int next = edge[currentS][i].second;
            int nextDistance = currentF + edge[currentS][i].first;

            if (d[next] > nextDistance) {
                d[next] = nextDistance;
                pq.push(make_pair(-nextDistance, next));
            }
        }
    }
}

int main() {
    int v, e;
    cin >> v >> e;

    int sn;
    cin >> sn;

    for (int i = 1; i < v + 1; ++i) {
        d[i] = INF;
    }

    for (int i = 0; i < e; ++i) {
        int start, end, cost;
        cin >> start >> end >> cost;
        edge[start].push_back(make_pair(cost, end));
    }

    dijkstra(sn);

    for (int i = 1; i < v + 1; ++i) {
        if (d[i] == INF) {
            cout << "INF" << " ";
        } else {
            cout << d[i] << " ";
        }
    }

    return 0;
}
