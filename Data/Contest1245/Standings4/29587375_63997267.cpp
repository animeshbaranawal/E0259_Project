//                                      KiSmAt
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

void solve(){
    ll n, m, x, y;
    cin >> x >> y;
    if(__gcd(x, y) == 1)    cout << "Finite\n";
    else    cout << "Infinite\n";
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
// nEro