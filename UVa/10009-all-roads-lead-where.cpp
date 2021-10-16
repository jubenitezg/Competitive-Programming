#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <set>
#include <queue>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

string bfs(unordered_map<string, vector<string>> &g, string &from, string &to) {
    set<string> seen;
    unordered_map<string, string> path;
    queue<string> q;
    path[from] = from[0];
    q.push(from);
    while (!q.empty()) {
        string curr = q.front(); q.pop();
        for (auto v : g[curr]) {
            if (seen.find(v) == seen.end()) {
                seen.insert(v);
                path[v] = path[curr] + v[0];
                q.push(v);
            }
        }
    }

    return path[to];
}

int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        int n, q;
        cin >> n >> q;
        unordered_map<string, vector<string>> graph;
        for (int i = 0; i < n; i++) {
            string c1, c2;
            cin >> c1 >> c2;
            graph[c1].push_back(c2);
            graph[c2].push_back(c1);
        }
        for (int i = 0; i < q; i++) {
            string q1, q2;
            cin >> q1 >> q2;
            cout << bfs(graph, q1, q2) << "\n";
        }
        if (t) cout << "\n";
    }

    return 0;
}