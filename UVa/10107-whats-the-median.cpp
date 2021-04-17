# include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

int median(vector<int> &vect) {
    int s = vect.size();
    if (s & 1 == 1) {
        return vect[s/2];
    } else {
        return (vect[s/2] + vect[s/2-1]) >> 1;
    }
}

void sort(vector<int> &vect) {
    for (int i = 1; i < vect.size(); i++) {
        int j = i;
        while (j > 0 && vect[j-1] > vect[j]) {
            int tmp = vect[j];
            vect[j] = vect[j-1];
            vect[j-1] = tmp;
            j--;
        }
    }
}

int main() {
    int n;
    vector<int> vect;
    while (scanf("%d", &n) != EOF) {
        vect.push_back(n);
        sort(vect);
        printf("%d\n", median(vect));
    }

    return 0;
}