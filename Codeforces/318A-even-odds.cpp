#include <iostream>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    fast
    long long n, k;
    cin >> n >> k;
    long long total_odds = n / 2 + n % 2;
    if (k > total_odds) {
        cout << (k - total_odds) * 2;
    }
    else {
        cout << 2*k-1;
    }

    return 0;
}