#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    char line[601];
    char marg[] = {'M','A','R','G','I','T'};
    char cont[] = { 1,  3,  2,  1,  1,  1};
    while (t--) {
        scanf(" %[^\n]", line);
        int dat[27] = {0};
        for (int i = 0; i < strlen(line); i++) {
            dat[line[i] - 'A']++;
        }
        int ans = 1000000;
        for (int i = 0; i < 6; i++) {
            ans = min(ans, dat[marg[i] - 'A']/cont[i]);
        }
        printf("%d\n", ans);
    }

    return 0;
}