# include<bits/stdc++.h>
using namespace std;

//greedy
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int prices[n];
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            prices[i] = -val;
        }
        sort(prices, prices + n);
        int discount = 0;
        if (n >= 3) {
            for (int i = 2; i < n; i += 3) {
                discount += -prices[i];
            }
        }
        printf("%d\n", discount);
    }

    return 0;
}