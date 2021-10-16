#include <stdio.h>
#include <string.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char line[101];
        scanf(" %[^\n]",line);
        int len = strlen(line);
        if (len > 10) {
            printf("%c%d%c\n", line[0], len - 2, line[len-1]);
        }
        else {
            printf("%s\n", line);
        }
    }

    return 0;
}