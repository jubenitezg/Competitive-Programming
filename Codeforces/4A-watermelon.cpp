#include <stdio.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
            if (i + j == w && i % 2 == 0 && j % 2 == 0) {
                printf("YES");
                return 0;
            }
        } 
    } 
    printf("NO");

    return 0;
}