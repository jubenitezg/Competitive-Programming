#include <iostream>
using namespace std;
/*
 Recursion get_change(curr, idx_coin + 1) + get_change(curr - coins[idx_coin], idx_coin) 
 base cases
 curr < 0 || idx_coin > coin.length return 0 (not possible)
 curr == 0 return 1 (no coins and no change, do nothing)
 */

int COINS_RECUR[] = {1, 5, 10, 25, 50};
int N_RECUR = 4;

int get_change_recur(int curr, int idx_coin) {
    if (curr < 0 || idx_coin > N_RECUR) {
        return 0;
    }
    if (curr == 0) {
        return 1;
    }
    return get_change_recur(curr, idx_coin + 1) + get_change_recur(curr - COINS_RECUR[idx_coin], idx_coin);
}

// calculate for every n, time 1.520s
int COINS_DP[] = {0, 1, 5, 10, 25, 50};
int N = 6;
int get_change_dp(int n) {
    long dp[N][n + 1];
    for (int w = 0; w <= n; w++) {
        dp[0][w] = 0; //base case no change
    }
    for (int i = 0; i < N; i++) {
        dp[i][0] = 1; // base case 0 coins
    }

    for (int i = 1; i < N; i++) {
        for (int w = 1; w <= n; w++) {
            long take = (w >= COINS_DP[i]) ? dp[i][w - COINS_DP[i]] : 0;
            long skip = dp[i-1][w];
            dp[i][w] = take + skip;
        }
    }

    return dp[N-1][n];
}

// precalculated time 0.000s
long DP[6][7490];

void init_dp() {
    for (int w = 0; w < 7490; w++) {
        DP[0][w] = 0;
    }
    for (int i = 0; i < 6; i++) {
        DP[i][0] = 1;
    }

    for (int i = 1; i < 6; i++) {
        for (int w = 1; w < 7490; w++) {
            long take = (w >= COINS_DP[i]) ? DP[i][w - COINS_DP[i]] : 0;
            long skip = DP[i-1][w];
            DP[i][w] = take + skip;
        }
    }

}

int get_change_precal(int n) {
    return DP[5][n];
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    init_dp();
    while (cin >> n) {
        cout << get_change_precal(n) << "\n";
    }
    
    return 0;
}