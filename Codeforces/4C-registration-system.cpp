# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    fast
    int n;
    unordered_map<string, int> mp;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        auto it = mp.find(s);
        if (it == mp.end()) {
            mp[s] = 1;
            cout << "OK\n";
        }
        else {
            int curr = it->second;
            s = s + to_string(curr);
            mp[it->first]++;
            cout << s << "\n";
        }
    }


    return 0;
}