# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int prob = 0;
    while(n--) {
        int sure = 0;
        for (int i = 0; i < 3; i++) {
            int v;
            scanf("%d", &v);
            sure += v;
        }
        if (sure >= 2) prob++;
    }
    printf("%d", prob);

    return 0;
}