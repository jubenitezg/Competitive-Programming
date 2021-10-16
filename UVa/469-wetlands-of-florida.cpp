#include <iostream>
#include <string>
#include <sstream>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;
char mat[100][100];
bool seen[100][100];
int n;
int m;
int di[] = {1, -1, 0,  0, 1, -1, -1,  1};
int dj[] = {0,  0, 1, -1, 1, -1,  1, -1};
char W = 'W';
char L = 'L';

int count_water(int i, int j) {
    int area = 0;
    seen[i][j] = true;
    for (int k = 0; k < 8; k++) {
        int ni = i + di[k];
        int nj = j + dj[k];
        if ( 0 <= ni && ni < n && 0 <= nj && nj < m && mat[ni][nj] == W && !seen[ni][nj]) {
            area += 1 + count_water(ni, nj);
        }
    } 

    return area;
}

int main() {
    //debug
    fast
    int t;
    string line;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--) {
        n = 0;
        m = 0;
        while (getline(cin, line)) {
            if (line == "") break;
            if (line[0] == W || line[0] == L) {
                for (int i = 0; i < line.size(); i++) {
                    mat[n][i] = line[i];
                } 
                n++;
                if(m == 0) m = line.size();
            } 
            else {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        seen[i][j] = false;
                    }
                }
                stringstream ss;
                int i, j;
                ss << line;
                ss >> i >> j;
                cout << count_water(i-1, j-1) + 1<< "\n";
            }
        }
        if (t) cout << "\n";
    }

    return 0;
}