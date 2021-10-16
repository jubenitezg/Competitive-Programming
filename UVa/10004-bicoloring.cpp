#include <stdio.h>
#include <vector>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;
bool ans;

void dfs(vector<vector<int>> adj, int *colors, int v, int c) {
    colors[v] = c;
    for (int u : adj[v]) {
        if (colors[u] == colors[v]) ans = false;
        if (colors[u] == 0) {
            int nc = c == 1 ? -1 : 1;
            dfs(adj, colors, u, nc);
        }
    }

}

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        int l;
        scanf("%d",&l);
        vector<vector<int>> adj(n);
        for (int i = 0; i < l; i++) {
            int a,b;
            scanf("%d %d", &a, &b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int colors[n];
        for (int i = 0; i < n; i++) {
            colors[i] = 0;
        }
        
        ans = true;
        dfs(adj, colors, 0, 1);
        if (ans) {
            printf("BICOLORABLE.\n");
        }
        else {
            printf("NOT BICOLORABLE.\n");
        }
        scanf("%d", &n);
    }
    return 0;
}