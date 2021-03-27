# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    vector<int> conts(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &conts[i]);
    }
    k--;
    int score = conts[k];
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (conts[i] >= score && conts[i] > 0) {
            cont++;
        }
    }
    printf("%d", cont);
    
    return 0;
}