# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

void create_map(unordered_map<char, char> &map) {
    map[' '] = ' ';

    map['`'] = '=';
    map['1'] = '`';
    map['2'] = '1';
    map['3'] = '2';
    map['4'] = '3';
    map['5'] = '4';
    map['6'] = '5';
    map['7'] = '6';
    map['8'] = '7';
    map['9'] = '8';
    map['0'] = '9';
    map['-'] = '0';
    map['='] = '-';

    map['Q'] = '\\';
    map['W'] = 'Q';
    map['E'] = 'W';
    map['R'] = 'E';
    map['T'] = 'R';
    map['Y'] = 'T';
    map['U'] = 'Y';
    map['I'] = 'U';
    map['O'] = 'I';
    map['P'] = 'O';
    map['['] = 'P';
    map[']'] = '[';
    map['\\'] = ']';

    map['A'] = '\'';
    map['S'] = 'A';
    map['D'] = 'S';
    map['F'] = 'D';
    map['G'] = 'F';
    map['H'] = 'G';
    map['J'] = 'H';
    map['K'] = 'J';
    map['L'] = 'K';
    map[';'] = 'L';
    map['\''] = ';';

    map['Z'] = '/';
    map['X'] = 'Z';
    map['C'] = 'X';
    map['V'] = 'C';
    map['B'] = 'V';
    map['N'] = 'B';
    map['M'] = 'N';
    map[','] = 'M';
    map['.'] = ',';
    map['/'] = '.';
}

int main () {
    fast
    unordered_map<char, char> map;
    string line;
    create_map(map);
    while (getline(cin, line)) {
        int n = line.length();
        for (int i = 0; i < n; i++) {
            cout << map[line[i]];
        }
        cout << "\n";
    }

    return 0;
}