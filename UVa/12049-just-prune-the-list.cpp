# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        unordered_map<int, int> cont_list1;
        unordered_map<int, int> cont_list2;
        for (int i = 0; i < n; i++) {
            int v;
            scanf("%d", &v);
            auto find = cont_list1.find(v);
            if (find == cont_list1.end()) {
                cont_list1[v] = 0;
            }
            cont_list1[v]++;
        } 
        for (int i = 0; i < m; i++) {
            int v;
            scanf("%d", &v);
            auto find = cont_list2.find(v);
            if (find == cont_list2.end()) {
                cont_list2[v] = 0;
            }
            cont_list2[v]++;
        }

        int remove = 0;
        for (auto entry : cont_list1) {
            auto find2 = cont_list2.find(entry.first);
            if (find2 != cont_list2.end()) {
                remove += abs(cont_list2[entry.first] - entry.second);
            }
            else {
                remove += entry.second;
            }
        }
        for (auto entry : cont_list2) {
            auto find1 = cont_list1.find(entry.first);
            if (find1 == cont_list1.end()) {
                remove += entry.second;
            }
        }

        printf("%d\n", remove);
    }

    return 0;
}