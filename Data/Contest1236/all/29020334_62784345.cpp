#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int mins = min(b, c/2);
        b -= mins;
        c -= mins*2;
        int ans = 3*mins;
        mins = min(a, b/2);
        a -= mins;
        b -= mins*2;
        ans += mins*3;
        cout << ans << endl;
    }
}