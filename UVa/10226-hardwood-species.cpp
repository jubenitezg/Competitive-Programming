#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d\n\n", &t);
    string line;
    while (t--) {
        int total = 0;
        map<string, int> woods;
        while (getline(cin, line)) {            
            if (line.size() > 0) {
                total++;
                map<string,int>::iterator it = woods.find(line);
                if (it != woods.end()) {
                    woods[line] = it->second + 1;
                }
                else {
                    woods[line] = 1;
                }
            }
            else {
                break;
            }
        }
        for (map<string,int>::iterator it = woods.begin(); it != woods.end(); it++) {
            double val = (double)it->second/(double)total*100;
            printf("%s %.4lf\n", it->first.data(), val);
        }
        if (t > 0) printf("\n");
    }

    return 0;
}
