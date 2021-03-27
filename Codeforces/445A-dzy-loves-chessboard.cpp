# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;
char B = 'B';
char W = 'W';
char board[101][101];
int n , m;
int di[] = {1,-1, 0, 0};
int dj[] = {0, 0, 1, -1};

void dfs(int i, int j, char c) {
    board[i][j] = c;
    for (int k = 0; k < 4; k++) {
        int ni = i + di[k];
        int nj = j + dj[k];
        if ( 0<= ni && ni < n && 0<= nj && nj < m && board[ni][nj] == '.') {
            int nc = board[i][j] == W ? B : W;
            dfs(ni, nj, nc);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    vector<pair<int,int>> nodes;
    char row[m];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", row);
        for (int j = 0; j < m; j++) {
            board[i][j] = row[j];
            if (board[i][j] == '.') {
                nodes.push_back({i,j});
            }
        }
    } 
    for (pair<int,int> coor: nodes) {
        int i = coor.first;
        int j = coor.second;
        if (board[i][j] == '.') {
            dfs(coor.first, coor.second, W);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}