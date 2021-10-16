#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string text;
    while (cin >> n >> text) {
        int max_val = -1;
        string pass;
        map<string, int> substrings;
        int len = text.size();
        for (int i = 0; i < len; i++) {
            if (i + n > len) continue;
            string sub = text.substr(i, n);
            map<string,int>::iterator found = substrings.find(sub);
            if (found != substrings.end()) {
                int cont = found -> second;
                substrings[sub] = cont + 1;
                if (max_val < cont + 1) {
                    max_val = cont + 1;
                    pass = sub;
                }
            }
            else {
                substrings[sub] = 0;
            }
            
        }
        cout << pass << "\n";
    }
    return 0;
}