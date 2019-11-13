#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const long double pi = acos(-1);
const double PI = acos(-1.);

#define MOD 1000000007

const int N = 1e5 + 5;
const int K = 2e2 + 2;
const int Ai = 1e6 + 6;
const int LOGN = 30;

int main() {
    ios_base::sync_with_stdio(false);

    int T; cin >> T;

    while(T--) {
        int n; cin >> n;

        vector<int> ve;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            ve.push_back(x);
        }

        for(int i = n; i >= 0; i--) {
            int cnt = 0;
            for(auto x : ve) {
                if(x >= i)
                    cnt++;
            }

            if(cnt >= i) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}

