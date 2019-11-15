#include <bits/stdc++.h>

#define int long long
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, x) for(int i = 0; i < x; i++)
#define rforn(i, x) for(int i = x - 1; i >= 0; i--)

using namespace std;

template<typename T> void print(T a)
{
    for (auto x : a)
        cout << x << ' ';
    cout << endl;
}

const int MOD = 1e9 + 7;

int mul(int a, int b)
{
    return (a * b) % MOD;
}

int bin_pow(int a, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return a;
    int ans = bin_pow(mul(a, a), p / 2);
    if (p & 1)
        ans = mul(ans, a);
    return ans;
}

signed main()
{
    //freopen("test.txt", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int ans = bin_pow(2, m);
    ans--;
    ans = bin_pow(ans, n);
    cout << ans;
    return 0;
}
