#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int contains[n] = {0};
        for (int i = 0; i < n-1; i++) {
            int abs_val = abs(arr[i]-arr[i+1]);
            if (abs_val < n) {
                contains[abs_val] = 1;
            }
        }
        int flag = 0;
        for (int i = 1; i <= n-1; i++) {
            if (contains[i] == 0) {
                flag = 1;
                break;
            }
        }
        
        if (flag) {
            printf("Not jolly\n");
        }
        else {
            printf("Jolly\n");
        }
    }
    return 0;
}