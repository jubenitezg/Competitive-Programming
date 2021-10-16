#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    char line[201];
    fgets(line, sizeof(line), stdin);
    while (t--) {
        fgets(line, sizeof(line), stdin);
        int cont[27] = {0};
        int max_v = 0;
        for (int i = 0; i < strlen(line); i++) {
            if ('a' <= line[i] && line[i] <= 'z') {
                cont[line[i] - 'a']++;
                max_v = max(max_v, cont[line[i]-'a']);
            }
            else if ('A' <= line[i] && line[i] <= 'Z') {
                cont[line[i] - 'A']++;
                max_v = max(max_v, cont[line[i]-'A']);
            }
        }
        for (int i = 0; i < 27; i++) {
            if (cont[i] == max_v)
                printf("%c", i + 'a');
        }
        printf("\n");
    }

    return 0;
}