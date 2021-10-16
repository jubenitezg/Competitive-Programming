#include <stdio.h>
#include <string.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

char num1[201];
char num2[201];
char ans[201];


int sum(char *num1, char *num2, int s1, int s2) {
    int pos = 0;
    int carry = 0;
    int last = 0;
    for (int i = 0; i < s2; i++) {
        int sum = (num1[i]-'0') + (num2[i]-'0') + carry;
        ans[pos++] = (sum % 10) + '0';
        carry = sum / 10;
        last = i;
    }
    last++;
    while (last < s1) {
        int curr = (num1[last++] - '0') + carry;
        carry = curr / 10;
        ans[pos++] = (curr % 10) + '0';
    }
    if (carry) {
        ans[pos++] = carry + '0';
    }

    return pos;
}


int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        scanf("%s %s", num1, num2);
        int s1 = strlen(num1);
        int s2 = strlen(num2);
        int s = 0;
        if (s1 > s2) {
            s = sum(num1, num2, s1, s2);
        }
        else {
            s = sum(num2, num1, s2, s1);
        }
        
        int start = 0;
        while (start < s && ans[start] == '0') start++;

        for (int i = start; i < s; i++) {
            printf("%c", ans[i]);
        }
        printf("\n");
    }

    return 0;
}