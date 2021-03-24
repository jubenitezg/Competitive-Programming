# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int change = 0;
    while (n--) {
        int p;
        scanf("%d", &p);
        change += p;
    }
    if(change) printf("HARD\n");
    else printf("EASY\n");

    return 0;
}