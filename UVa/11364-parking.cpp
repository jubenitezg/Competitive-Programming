#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int min_v = 1000;
        int max_v = -1;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            min_v = min(min_v, val);
            max_v = max(max_v, val);
        }
        // times 2, because 2 trips
        printf("%d\n", (max_v-min_v) * 2);
    }
    return 0;
}