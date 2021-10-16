#include <iostream>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

//dir 1 clockwise
int to_degrees(int from, int to, bool dir) {
    if (from == to) return 0;
    int dif = from - to;
    if (dif > 0) {
        return dir ? (45 * dif) / 5 : 360 - (45 * dif) / 5;
    }
    return dir ? (45 * (40 + dif)) / 5 : 360 - (45 * (40 + dif)) / 5;
}

int main() {
    fast
    int ini, p1, p2, p3;
    cin >> ini >> p1 >> p2 >> p3;
    while (ini || p1 || p2 || p3 ) {
        int ans = 360 * 2;
        ans += to_degrees(ini, p1, 1) + 360;
        ans += to_degrees(p1, p2, 0);
        ans += to_degrees(p2, p3, 1);
        cout << ans << "\n";
        cin >> ini >> p1 >> p2 >> p3;
    }
    
}