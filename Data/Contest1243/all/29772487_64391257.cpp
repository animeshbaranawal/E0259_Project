#include <bits/stdc++.h>

//@formatter:off
namespace {
    using namespace std;
    typedef long long ll;
    template<typename T>istream &operator>>(istream &is, vector<T> &v) { for (T &t : v) is >> t; return is; }
    template<typename T>bool space(vector<T>) { return false; }
    template<typename T>bool space(T) { return true; }
    bool space(char) { return false; }
//    ostream &operator<<(ostream &os, pair<ll, ll> &t) {  os << t.first << " "  << t.second << "\n"; return os;}
    template<typename T>ostream &operator<<(ostream &os, const vector<T> &v) { for (const T &t : v) { os << t << (space(t) ? " " : ""); } os << "\n"; return os; }
    ll gcd(ll a, ll b) { while (b) { ll mod = a % b; a = b; b = mod; } return a; }
    template<typename C>void incr_sort(C &v) { stable_sort(v.begin(), v.end()); }
    template<typename C>void decr_sort(C &v) { stable_sort(v.rbegin(), v.rend()); }
    ll sum(const vector<int> &v) { ll s = 0; for (ll value : v) s += value; return s; }
    vector<ll> prefix_sum(const vector<int> &v) { vector<ll> res(v.size()); res[0] = v[0]; for (int i = 1; i < v.size(); ++i) res[i] = res[i - 1] + v[i]; return res; }
    class ExitException : exception {};
    template<typename T>void answer(T &ans, ostream &os = cout){os << ans << "\n"; throw ExitException();}
}
//@formatter:on
void solve();

int main() {
#define int ll
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i) try { solve(); } catch (ExitException) {}
    return 0;
}

vector<pair<int, int>> ans;

void solve(string &s, string &t, int f = 0) {
    if (f == s.size()) return;
    char c = s[f];
    if (t[f] == c) solve(s, t, f + 1);
    else {
        for (int i = f + 1; i < s.size(); ++i) {
            if (s[i] == c) {
                ans.emplace_back(i + 1, f + 1);
                swap(s[i], t[f]);

                solve(s, t, f + 1);
                return;
            }
        }
        for (int i = f + 1; i < s.size(); ++i) {
            if (t[i] == c) {
                ans.emplace_back(i + 1, i + 1);
                swap(s[i], t[i]);
                ans.emplace_back(i + 1, f + 1);
                swap(s[i], t[f]);
                solve(s, t, f + 1);
                return;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> cnt(256);
    for (int i = 0; i < n; ++i) ++cnt[s[i]];
    for (int i = 0; i < n; ++i) ++cnt[t[i]];
    if (count_if(cnt.begin(), cnt.end(), [](int x) { return x % 2; }))answer("No");
    cout << "Yes\n";
    ans.resize(0);
    ans.reserve(2 * n);
    solve(s, t);
    cout << ans.size() << "\n";
    for (int j = 0; j < ans.size(); ++j) {
        cout << ans[j].first << " " << ans[j].second << "\n";
    }
}