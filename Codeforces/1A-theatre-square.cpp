# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main () {
    fast
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n+a-1)/a) * ((m+a-1)/a);

    return 0;
}   