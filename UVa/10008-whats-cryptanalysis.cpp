# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    map<int,int> m;
    char line[1000000];
    fgets(line, sizeof(line), stdin);
    while(n--) {
        fgets(line, sizeof(line), stdin);
        for (int i = 0; i < strlen(line); i++) {
            char curr = line[i];
            if (m.find(curr) == m.end()) {
                m[curr] = 0;
            }
            if ('a' <= line[i] && line[i] <= 'z') {
                m[line[i] - 'a']++;
            }
            else if ('A' <= line[i] && line[i] <= 'Z') {
                m[line[i] - 'A']++;
            }
        }
    }
    vector<pair<int,int>> ans;
    for (const auto& entry : m) {
        if (entry.second > 0) {
            ans.push_back({-entry.second, entry.first});
        }
    }
    sort(ans.begin(), ans.end());
    for (const auto& p : ans) {
        printf("%c %d\n", p.second + 'A', -p.first);
    }

    return 0;
}