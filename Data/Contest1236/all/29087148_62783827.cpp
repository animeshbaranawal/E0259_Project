#include <algorithm>
#include <array>
#include <assert.h>
#include <chrono>
#include <bitset>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <numeric>
#include <random>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ld> vld;
typedef vector<vector<int>> vvi;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<vector<ld>> vvld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef vector<pll> vpll;

#ifdef OLBOEB
mt19937 rnd(228 + 1488 + 238 + 24111997 % 322);
#else
mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif

void print_time() {
#ifdef OLBOEB
    cout.flush();
    cerr << "\ntime: " << clock() * 1.0 / CLOCKS_PER_SEC << endl;
#endif
}

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define sz(x) ((ll)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

template<class T1, class T2>
ostream& operator<< (ostream &out, pair<T1, T2> pair) { return out << "(" << pair.first << ", " << pair.second << ")";}
template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
template<class T> ostream& operator<<(ostream& out, set<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }
template<class L, class R> ostream& operator<<(ostream& out, map<L, R> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

ll solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = min(b, c / 2);
    ll ans = x;
    b -= x;
    ans += min(a, b / 2);
    return ans * 3;
}

int main() {
    cout << fixed << setprecision(20);
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll q = 1;
    cin >> q;

    while (q--) {
        cout << solve() << "\n";
    }

    print_time();
    return 0;
}
