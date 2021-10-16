#include <stdio.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) && n != 42) {
        printf("%d\n", n);
    }

    return 0;
}