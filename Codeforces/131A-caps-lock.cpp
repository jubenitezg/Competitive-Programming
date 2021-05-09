#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    char line[101];
    scanf(" %[^\n]", line);
    int n = strlen(line);
    bool upper = true;
    bool first_lower = ('a' <= line[0] && line[0] <= 'z');
    for (int i = 1; i < n && upper; i++) {
        upper = upper && ('A' <= line[i] && line[i] <= 'Z');
    }

    if (upper && first_lower) {
        line[0] -= 32;
        for (int i = 1; i < n; i++) {
            line[i] += 32;
        }
    }
    else if (upper) {
        for (int i = 0; i < n; i++) {
            line[i] += 32;
        }
    }

    printf("%s\n", line);

    return 0;
}