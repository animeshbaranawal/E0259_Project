#include<bits/stdc++.h>

using namespace std;


#define ss second
#define ff first
#define int long long
//#define double long double
#define pb push_back

const int N = 1e6 + 1, MOD = 1e9 + 7, mod = 998244353, INF = 3e18;

mt19937 Flash_new_51(51515);

using vi = vector <int>;
using vp = vector <pair <int, int>>;

int ANS[2], lst[2];


signed main() {
   #ifdef Flash
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int t;
   cin >> t;
   while (t--) {
        int n, k1, k = -1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (c == '1') {
                if (k == -1) k = i;
                k1 = i;
            }
        }
        if (k == -1) {
            cout << n << "\n";
            continue;
        }
        int l = k, l1 = k1;
        if (k == k1) {
            k = max(abs(l + 1) * 2, n + 1);
            k1 = max(abs(n - l) * 2, n + 1);
            cout << max(k, k1) << "\n";
        }
        else {
            k = max(abs(l1 + 1) * 2, n + 1);
            k1 = max((n - l) * 2, n + 1);
            cout << max(k, k1) << "\n";
        }
   }

}
