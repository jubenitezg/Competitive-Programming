#include <stdio.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int main() {
    char line[1001];
    scanf(" %[^\n]",line);
    if ('a' <= line[0] && line[0] <= 'z' ) {
        line[0] -= 32;
    }
    printf("%s", line);
    
    return 0;
}