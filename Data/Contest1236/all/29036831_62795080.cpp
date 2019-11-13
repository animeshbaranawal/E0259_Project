/*
 
 ∧＿∧
( ･ω･｡)つ━☆・*。
⊂　 ノ 　　　・゜
しーＪ　　 Accepted
 
*/
 
 
 
// #pragma GCC optimize("O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
#define ll long long
#define all(x) begin(x), end(x)
#define x first
#define y second
#define int long long
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long double ld;
template<typename T>
using kawaii_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
const ld PI = atan2(0, -1);
 
void seriy() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(14);
    #ifdef _offline
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
 
const int MAXN = 1e5 + 10;
const int MAXM = 600;
const int INF = 1e18;
const int BASE = 47;
const int MOD = 1e9 + 7;
const int MAXLOG = 21;
 
signed main() {
    seriy();
    int n;
    cin >> n;
    int a[n][n];
    int cur = 1;
    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < n; i++) {
                a[i][j] = cur++;
            }
        }
        else {
            for(int i = n - 1; i >= 0; i--) {
                a[i][j] = cur++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}