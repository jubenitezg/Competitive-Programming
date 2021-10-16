#include <iostream>
#include <stdio.h>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main () {
    int t;
    scanf("%d%*c", &t);
    set<string> new_lang;
    for (int tc = 1 ; tc <= t; tc++) {
        int m, n;
        scanf("%d %d%*c", &m, &n);
        
        vector<string> l1(m);
        vector<string> l2(n);
        for (int i = 0; i < m; i++){
            getline(cin, l1[i]);
        }
        for (int i = 0; i < n; i++){
            getline(cin, l2[i]);
        }
        
        for (int i = 0; i < m ; i++) {
            for (int j = 0; j < n; j++) {            
                new_lang.insert(l1[i] + l2[j]);
            }
        }
        printf("Case %d: %d\n", tc, new_lang.size());
        new_lang.clear();
    }

    return 0;
}