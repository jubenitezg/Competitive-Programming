#include <stdio.h>
#include <string>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;

void tree(string cad){
   long long int l1 = 0, l2 = 1, m1 = 1, m2 = 1, r1 = 1, r2 = 0;

   for (int i = 0; i < cad.size(); i++){
        if (cad[i] == 'R'){
            l1 = m1;
            l2 = m2;
            m1 = m1 + r1;
            m2 = m2 + r2;
        }
        else{
            r1 = m1;
            r2 = m2;
            m1 = m1 + l1;
            m2 = m2 + l2;
        }

   }

   printf("%lld/%lld\n",m1, m2);
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        char cad[91];
        scanf("%s",&cad);
        tree(cad);
    }
    return 0;
}