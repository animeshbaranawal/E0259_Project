#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for (int tc = 0; tc < t; tc++){
        int a,b,c,d,k;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
        int x = (a-1)/c+1;
        int y = (b-1)/d+1;
        if (x + y <= k){
            printf("%d %d\n",x,y);
        }
        else printf("-1\n");

    }
}
